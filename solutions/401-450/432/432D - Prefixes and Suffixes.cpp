#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 100500
using namespace std;

int pi[MAXN], cnt[MAXN];
void prefix_function(string s, int n)
{
    for(int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j]) j = pi[j - 1];
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    prefix_function(s, n);

    for(int i = 0; i < n; i++) cnt[pi[i]]++;
    for(int i = n; i > 0; i--) cnt[pi[i - 1]] += cnt[i];
    for(int i = 0; i <= n; i++) cnt[i]++;
    vector<int> ans;
    for(int i = pi[n - 1]; i > 0; i = pi[i - 1])
        ans.push_back(i);

    ans.push_back(n);
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ' << cnt[ans[i]] << endl;
    }

    return 0;
}
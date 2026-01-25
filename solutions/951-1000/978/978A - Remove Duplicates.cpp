#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    vector<int> v, ans;
    unordered_map<int, int> cnt;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        cnt[x]++;
    }

    for(int i = 0; i < v.size(); i++)
    {
        int cur = v[i];
        cnt[cur]--;
        if(cnt[cur] == 0)
            ans.push_back(cur);
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}
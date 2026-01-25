#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    unordered_map<string, int> mp;
    int n, m, a[102];
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    vector<int> freq;
    for(auto &el : mp)
        freq.push_back(el.second);

    sort(freq.begin(), freq.end(), greater<int>());
    sort(a, a + n);
    int minS = 0, maxS = 0;
    for(int i = 0; i < freq.size(); i++)
        minS += freq[i] * a[i];

    for(int i = 0, j = n - 1; i < freq.size(); i++, j--)
        maxS += freq[i] * a[j];

    cout << minS << ' ' << maxS << endl;
    return 0;
}
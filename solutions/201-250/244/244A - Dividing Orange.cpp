#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, a[990], used[990]; // 30^2
    memset(used, 0, sizeof used);
    cin >> n >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> a[i];
        used[a[i]] = 1;
    }

    int cur = 1;
    vector<int> v[990];
    for(int i = 0; i < k; i++)
    {
        v[i].push_back(a[i]);
        for(int j = 1; j < n; j++)
        {
            while(used[cur]) cur++;
            v[i].push_back(cur);
            used[cur] = 1;
        }
    }

    for(int i = 0; i < k; i++)
        sort(v[i].begin(), v[i].end());

    for(int i = 0; i < k; i++, cout << endl)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
        }
    }

    return 0;
}
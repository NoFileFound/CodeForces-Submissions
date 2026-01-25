#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, r1, r2;
    cin >> n >> m;
    r1 = n / m;
    r2 = n % m;

    vector<int> ans;
    for(int i = 0; i < r2; i++)
        ans.push_back(r1 + 1);

    for(int i = r2; i < m; i++)
        ans.push_back(r1);

    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}
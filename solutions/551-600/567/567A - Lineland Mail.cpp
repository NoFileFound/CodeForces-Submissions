#include <bits/stdc++.h>
#define endl '\n'
#define INF 1000000000000000000
using namespace std;
typedef long long ll;

int main()
{
    int n;
    vector<ll> v;
    cin >> n;
    v.push_back(-INF);
    for(int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
 
    v.push_back(INF);
    for(int i = 1; i <= n; i++)
    {
        ll mini = min(v[i] - v[i - 1], v[i + 1] - v[i]);
        ll maxi = max(v[i] - v[1], v[n] - v[i]);
        cout << mini << ' ' << maxi << endl;
    }
 
    return 0;
}
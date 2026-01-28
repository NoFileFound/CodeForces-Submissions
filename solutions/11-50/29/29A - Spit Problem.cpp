#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    map<int, int> mp;
    cin >> n;
    while(n--)
    {
        int x, d;
        cin >> x >> d;
        mp[x] = d;
    }

    for(auto &el : mp)
    {
        long long sum = el.first + el.second;
        if(mp.count(sum) && mp[sum] == -el.second)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
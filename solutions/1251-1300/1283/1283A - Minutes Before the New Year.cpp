#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, h, m;
    cin >> T;
    while(T--)
    {
        cin >> h >> m;
        int res = h * 60 + m;
        res = 1440 - res;
        cout << res << endl;
    }

    return 0;
}
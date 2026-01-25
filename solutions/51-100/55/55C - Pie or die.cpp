#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    while(k--)
    {
        int x, y;
        cin >> x >> y;

        if(x - 1 <= 4 || x >= n - 4)
        {
            cout << "YES" << endl;
            return 0;
        }

        if(y - 1 <= 4 || y >= m - 4)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
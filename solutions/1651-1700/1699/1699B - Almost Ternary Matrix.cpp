#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, m;
    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++, cout << endl)
        {
            for(int j = 1; j <= m; j++)
            {
                cout << ((i % 4 < 2) ^ (j % 4 < 2)) << " ";
            }
        }
    }

    return 0;
}
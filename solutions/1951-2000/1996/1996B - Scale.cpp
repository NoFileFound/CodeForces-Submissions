#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

char a[1002][1002];

int main()
{
    int T, n, k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n; i += k, cout << endl)
        {
            for(int j = 0; j < n; j += k)
            {
                cout << a[i][j];
            }
        }
    }

    return 0;
}

/*
4
4 4
0000
0000
0000
0000
6 3
000111
000111
000111
111000
111000
111000
6 2
001100
001100
111111
111111
110000
110000
8 1
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++, cout << endl)
    {
        for(int j = 0; j < 3; j++)
        {
            int cnt = a[i][j] + (i > 0 ? a[i - 1][j] : 0) + (i < 2 ? a[i + 1][j] : 0) + (j > 0 ? a[i][j - 1] : 0) + (j < 2 ? a[i][j + 1] : 0);
            cout << (cnt % 2 == 0);
        }
    }

    return 0;
}

/*
1 0 0
0 0 0
0 0 1
*/

/*
1 0 1
8 8 8
2 0 3
*/
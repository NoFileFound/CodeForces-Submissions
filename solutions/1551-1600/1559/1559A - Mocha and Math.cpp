#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[105];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int r1 = a[0];
        for(int i = 1; i < n; i++)
        {
            r1 &= a[i];
        }

        cout << r1 << endl;
    }

    return 0;
}

/*
4
2
1 2
3
1 1 3
4
3 11 3 7
5
11 7 15 3 7
*/
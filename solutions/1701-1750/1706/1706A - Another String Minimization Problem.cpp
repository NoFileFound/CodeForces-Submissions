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
        string s(m, 'B');
        for(int i = 0; i < n; i++)
        {
            int x, mn, mx;
            cin >> x;
            mn = min(x, m + 1 - x) - 1;
            mx = max(x, m + 1 - x) - 1;
            if(s[mn] == 'B') s[mn] = 'A';
            else s[mx] = 'A';
        }

        cout << s << endl;
    }

    return 0;
}

/*
6
4 5
1 1 3 1
1 5
2
4 1
1 1 1 1
2 4
1 3
2 7
7 5
4 5
5 5 3 5
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
char ch[60][60];

void read()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ch[i][j];
        }
    }
}

void solve()
{
    int minr = n, maxr = -1, minc = m, maxc = -1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(ch[i][j] != '*') continue;

            minr = min(minr, i);
            minc = min(minc, j);
            maxr = max(maxr, i);
            maxc = max(maxc, j);
        }
    }

    for(int i = minr; i <= maxr; i++, cout << endl)
    {
        for(int j = minc; j <= maxc; j++)
        {
            cout << ch[i][j];
        }
    }
}

int main()
{
    read();
    solve();
    return 0;
}

/*
6 7
.......
..***..
..*....
..***..
..*....
..***..
*/
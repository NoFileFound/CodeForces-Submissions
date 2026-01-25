#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int sMoves = 0, tMoves = 0;
    char a, b, c, d, sPos, tPos;
    cin >> a >> b >> c >> d;
    if(c > a)
    {
        sMoves = (c - a);
        sPos = 'R';
    }
    else
    {
        sMoves = (a - c);
        sPos = 'L';
    }

    if(b > d)
    {
        tMoves = (b - '0') - (d - '0');
        tPos = 'D';
    }
    else
    {
        tMoves = (d - '0') - (b - '0');
        tPos = 'U';
    }

    int n = max(sMoves, tMoves);
    cout << n << endl;
    while(n--)
    {
        if(sMoves > 0)
        {
            cout << sPos;
            sMoves--;
        }

        if(tMoves > 0)
        {
            cout << tPos;
            tMoves--;
        }

        cout << endl;
    }
	
    return 0;
}
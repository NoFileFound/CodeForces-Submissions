#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

char a[3][3];
int cntX = 0, cnt0 = 0;

void read()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'X') cntX++;
            else if(a[i][j] == '0') cnt0++;
        }
    }
}

bool checkWin(char ch)
{
    for(int i = 0; i < 3; i++)
    {
        if(a[i][0] == ch && a[i][1] == ch && a[i][2] == ch) return true;
        if(a[0][i] == ch && a[1][i] == ch && a[2][i] == ch) return true;
    }
    if(a[0][0] == ch && a[1][1] == ch && a[2][2] == ch) return true;
    if(a[0][2] == ch && a[1][1] == ch && a[2][0] == ch) return true;
    return false;
}

int main()
{
    read();
    if(cnt0 > cntX || cntX > cnt0 + 1)
    {
        cout << "illegal" << endl;
        return 0;
    }

    bool winO = checkWin('0'), winX = checkWin('X');
    if(winO && winX || winX && cntX != cnt0 + 1 || winO && cntX != cnt0)
    {
        cout << "illegal" << endl;
        return 0;
    }

    cout << (winX ? "the first player won" : winO ? "the second player won" : (cntX + cnt0 == 9) ? "draw" : cntX == cnt0 ? "first" : "second") << endl;
    return 0;
}
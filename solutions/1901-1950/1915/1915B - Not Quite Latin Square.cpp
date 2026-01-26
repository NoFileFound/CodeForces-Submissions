#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        char ans;
        string s;
        for(int i = 0; i < 3; i++)
        {
            cin >> s;
            if(s.find('A') == -1) ans = 'A';
            else if(s.find('B') == -1) ans = 'B';
            else if(s.find('C') == -1) ans = 'C';
        }

        cout << ans << endl;
    }

    return 0;
}

/*
3
ABC
C?B
BCA
BCA
CA?
ABC
?AB
BCA
ABC
*/
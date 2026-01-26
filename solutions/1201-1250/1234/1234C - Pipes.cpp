#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int q, n;
    string s[2];
    cin >> q;
    while(q--)
    {
        cin >> n >> s[0] >> s[1];
        int i = 0;
        bool flag = true;
        for(int j = 0; j < n; j++)
        {
            if(s[i][j] >= '3')
            {
               i = 1 - i;
               if(s[i][j] < '3')
               {
                    flag = (j == n);
                    break;
               }
            }
        }
        cout << (flag && i == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}

/*
6
7
2323216
1615124
1
3
4
2
13
24
2
12
34
3
536
345
2
46
54
*/
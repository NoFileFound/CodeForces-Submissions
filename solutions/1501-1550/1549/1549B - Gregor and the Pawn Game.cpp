#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s1, s2;
    cin >> T;
    while(T--)
    {
        int ans = 0;
        cin >> n >> s1 >> s2;
        for(int i = 0; i < n; i++)
        {
            if(s2[i] != '0')
            {
                if(i > 0 && s1[i - 1] == '1')
                {
                    s1[i - 1] = '0';
                    ans++;
                }
                else if(s1[i] == '0') ans++;
                else if(i < n - 1 && s1[i + 1] == '1')
                {
                    s1[i + 1] = '0';
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

/*
4
3
000
111
4
1111
1111
3
010
010
5
11001
00000
*/
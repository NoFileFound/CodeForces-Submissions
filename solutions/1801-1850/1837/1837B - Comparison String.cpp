#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, mxcnt = 0, mx = 0;
    string s;

    cin >> T;
    while(T--)
    {
        cin >> n >> s;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == s[i + 1]) mxcnt++;
            else
            {
                mxcnt = 0;
            }

            if(mx < mxcnt) mx = mxcnt;
        }

        cout << mx + 2 << endl;
        mx = mxcnt = 0;
    }

    return 0;
}
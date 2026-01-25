#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int cnt = 1, mxcnt = 0;
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1]) cnt++;
        else
        {
            mxcnt += (cnt + 4) / 5;
            cnt = 1;
        }
    }

    cout << mxcnt + (cnt + 4) / 5 << endl;
    return 0;
}

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, curr = 0, cntIn = 0, mxout = 0;
    bool flag = false;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])) curr++;
        else
        {
            if(curr > 0)
            {
                if(flag) cntIn++;
                else mxout = max(mxout, curr);
                curr = 0;
            }

            if(s[i] == '(') flag = true;
            if(s[i] == ')') flag = false;
        }
    }

    if(curr > 0)
    {
        if(flag) cntIn++;
        else mxout = max(mxout, curr);
    }

    cout << mxout << ' ' << cntIn << endl;
    return 0;
}
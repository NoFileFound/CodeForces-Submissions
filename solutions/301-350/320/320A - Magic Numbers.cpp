#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int cnt4 = 0;
    string s;
    cin >> s;
    if(s[0] != '1') goto bad;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') cnt4 = 0;
        else if(s[i] == '4')
        {
            cnt4++;
            if(cnt4 > 2) goto bad;
        }
        else goto bad;
    }

    cout << "YES" << endl;
    return 0;

bad:
    cout << "NO" << endl;
    return 0;
}
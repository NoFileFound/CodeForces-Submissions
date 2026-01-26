#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        int hours = (s[0] - '0') * 10 + (s[1] - '0');
        if(hours == 0) cout << "12:" << s.substr(3, 2) << " AM" << endl;
        else if(hours < 12) cout << s << " AM" << endl;
        else
        {
            hours -= 12;
            if(hours == 0) hours = 12;
            s[0] = '0' + hours / 10;
            s[1] = '0' + hours % 10;
            cout << s << " PM" << endl;
        }
    }

    return 0;
}
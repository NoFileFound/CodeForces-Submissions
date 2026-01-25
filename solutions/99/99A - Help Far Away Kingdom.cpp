#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string _round(string s)
{
    string tmp="";
    int dotPos = s.find('.');
    for(int i = 0; i < dotPos; i++)
        tmp += s[i];

    if(s[dotPos + 1] < '5')
    {
        return tmp;
    }
    else
    {
        int carry = 1;
        for(int i = tmp.size() - 1; i >= 0 && carry; i--)
        {
            int d = tmp[i] - '0' + carry;
            tmp[i] = (d % 10) + '0';
            carry = d / 10;
        }

        if(carry)
            tmp.insert(tmp.begin(), '1');

        return tmp;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << (s[s.find('.') - 1] == '9' ? "GOTO Vasilisa." : _round(s)) << endl;
    return 0;
}
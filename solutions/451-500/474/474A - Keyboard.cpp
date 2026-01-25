#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s, alpha = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin >> dir >> s;
    for(int i = 0; i < s.size(); i++)
    {
        int pos = alpha.find(s[i]);
        if(dir == 'R') s[i] = alpha[pos - 1];
        else s[i] = alpha[pos + 1];
    }

    cout << s << endl;
    return 0;
}
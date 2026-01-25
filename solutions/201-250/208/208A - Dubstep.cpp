#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int pos = 0;
    string s;
    cin >> s;
    while((pos = s.find("WUB")) != -1)
    {
        s.erase(pos, 3);
        if(pos > 0 && s[pos - 1] != ' ') s.insert(pos, " ");
    }

    cout << s << endl;
    return 0;
}
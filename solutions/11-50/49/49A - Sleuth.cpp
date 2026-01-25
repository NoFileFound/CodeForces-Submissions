#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    getline(cin, s, '?');

    char lastEl;
    for(int i = 0; i < s.size(); i++)
        if(isalpha(s[i])) lastEl = tolower(s[i]);

    cout << (lastEl == 'a' || lastEl == 'e' || lastEl == 'i' || lastEl == 'o' || lastEl == 'u' || lastEl == 'y' ? "YES" : "NO") << endl;
    return 0;
}
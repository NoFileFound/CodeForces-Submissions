#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string to_upper(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(islower(s[i])) s[i] = toupper(s[i]);
    }
    return s;
}

string to_lower(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    int cntl, cntu;
    cntl = cntu = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) cntu++;
        else cntl++;
    }

    if(cntu > cntl) s = to_upper(s);
    else s = to_lower(s);
    cout << s << endl;
	return 0;
}
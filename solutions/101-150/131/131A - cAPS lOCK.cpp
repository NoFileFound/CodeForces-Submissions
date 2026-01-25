#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

char cmp(char a)
{
    return isupper(a) ? tolower(a) : toupper(a);
}

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) cnt++;
    }

    if((cnt == s.size() - 1 && islower(s[0])) || cnt == s.size())
    {
        transform(s.begin(), s.end(), s.begin(), cmp);
    }

    cout << s << endl;
    return 0;
}
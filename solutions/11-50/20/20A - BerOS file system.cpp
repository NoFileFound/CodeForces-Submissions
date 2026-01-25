#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s, tmp = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '/') tmp += s[i];
        else if(s[i] != s[i + 1]) tmp += s[i];
    }
	
    if(s[s.size() - 1] == '/' && tmp.size() > 1) 
		tmp.pop_back();
	
    cout << tmp << endl;
    return 0;
}
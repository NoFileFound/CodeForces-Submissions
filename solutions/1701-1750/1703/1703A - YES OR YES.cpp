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
        for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
        cout <<(s == "yes" ? "YES" : "NO") << endl;
    }
	
    return 0;
}
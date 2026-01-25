#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int ans = 0;
string s;
vector<string> v;

int main()
{
    while(getline(cin, s, '\n'))
    {
        if(s[0] == '+')
            v.push_back(s.substr(1, s.size() - 1));
        else if(s[0] == '-')
            v.erase(remove(v.begin(), v.end(), s.substr(1, s.size() - 1)), v.end());
        else
        {
            int pos = s.find(':') + 1;
            s = s.substr(pos, s.size() - 1);
            ans += s.size() * v.size();
        }
    }
	
    cout << ans << endl;
    return 0;
}

/*
+Mike
Mike:hello
+Kate
+Dmitry
-Dmitry
Kate:hi
-Kate

+Mike
-Mike
+Mike
Mike:Hi   I am here
-Mike
+Kate
-Kate
*/
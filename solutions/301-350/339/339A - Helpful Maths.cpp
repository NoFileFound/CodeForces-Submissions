#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string s, ans = "";
vector<char> v;

int main() 
{
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
            v.push_back(s[i]);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        ans += v[i];
        if(i + 1 < v.size())
            ans += '+';
    }
	
    cout << ans << endl;
    return 0;
}
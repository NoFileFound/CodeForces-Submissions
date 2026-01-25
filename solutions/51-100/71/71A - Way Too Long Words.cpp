#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s.size() < 11)
            cout << s << endl;
        else
            cout << s[0] + to_string(s.size() - 2) + s[s.size() - 1] << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string pi = "31415926535897932384626433832795", s;
    cin >> T;
    while(T--)
    {
        int cnt = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != pi[i]) break;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
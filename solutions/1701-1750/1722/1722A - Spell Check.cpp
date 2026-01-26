#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s;
    cin >> T;
    while(T--)
    {
        int upCnt = 0;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(isupper(s[i])) upCnt++;
        }

        if(upCnt != 1) cout << "NO" << endl;
        else
        {
            sort(s.begin(), s.end());
            cout << (s == "Timru" ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
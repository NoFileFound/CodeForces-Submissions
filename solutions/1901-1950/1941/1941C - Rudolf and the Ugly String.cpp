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
        int ans = 0;
        cin >> n >> s;
        for(int i = 0; i < n - 2; i++)
        {
            if(s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") ans++, i += 2;
        }

        cout << ans << endl;
    }

    return 0;
}
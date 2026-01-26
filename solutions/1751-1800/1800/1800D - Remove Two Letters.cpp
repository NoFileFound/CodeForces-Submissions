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
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] != s[i + 2]) ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
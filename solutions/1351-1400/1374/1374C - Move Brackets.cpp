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
        int curr = 0, ans = 0;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(') curr++;
            else curr--;

            if(curr < 0) ans = max(ans, -curr);
        }

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = s.size();
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        int curr = 0, mx = 0;
        bool flag = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ch) curr++;
            else
            {
                mx = max(mx, curr);
                curr = 0;
                flag = true;
            }
        }

        mx = max(mx, curr);
        if(flag)
            ans = min(ans, mx + 1);
    }

    cout << ans << endl;
    return 0;
}
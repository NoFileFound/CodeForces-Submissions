#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s, ans = "";
    cin >> s;
    bool dir = (s.size() & 1);
    for(int i = 0, j = s.size() - 1; i <= j;)
    {
        if(dir)
        {
            dir = false;
            ans += s[i];
            i++;
        }
        else
        {
            dir = true;
            ans += s[j];
            j--;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
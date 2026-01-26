#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, used[26];
    string s;
    cin >> T;
    while(T--)
    {
        int ans = 0, dist = 0;
        memset(used, 0, sizeof used);
        cin >> n >> s;
        for(int i = 0; i < n; i++)
        {
            int cur = s[i] - 'a';
            if(!used[cur])
            {
                used[cur] = 1;
                dist++;
            }
			
            ans += dist;
        }

        cout << ans << endl;
    }

    return 0;
}
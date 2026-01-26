#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[60], used[60];
    cin >> T;
    while(T--)
    {
        bool flag = false;
        memset(used, 0, sizeof used);
        cin >> n;
        for(int i  = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            int curr = a[i];
            while(curr > 0)
            {
                if(curr <= n && !used[curr])
                {
                    used[curr] = 1;
                    break;
                }

                curr /= 2;
            }

            if(!curr)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "NO" : "YES") << endl;
    }

    return 0;
}
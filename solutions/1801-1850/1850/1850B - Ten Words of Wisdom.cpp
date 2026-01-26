#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a, b;
    cin >> T;
    while(T--)
    {
        int curr = 0, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if(a <= 10)
            {
                if(b > curr)
                {
                    curr = b;
                    ans = i;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
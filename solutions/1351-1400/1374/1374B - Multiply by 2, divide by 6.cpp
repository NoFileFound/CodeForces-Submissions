#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        int ans = 0;
        cin >> n;
        while(n > 1)
        {
            ans++;
            if(n % 6 == 0) n /= 6;
            else if(n % 3 == 0) n *= 2;
            else
            {
                ans = -1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
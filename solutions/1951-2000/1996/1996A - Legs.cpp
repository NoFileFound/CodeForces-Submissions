#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, ans = 0;
        cin >> n;
        while(n > 0)
        {
            if(n >= 4) n -= 4;
            else n -= 2;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
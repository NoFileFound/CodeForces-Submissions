#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, curr = 0, ans = INT_MIN;
    cin >> n >> k;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(y > k) curr = x - (y - k);
        else curr = x;

        ans = max(ans, curr);
    }

    cout << ans << endl;
    return 0;
}
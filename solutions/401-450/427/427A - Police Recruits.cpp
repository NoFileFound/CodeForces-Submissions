#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, cur = 0, ans = 0;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(x > 0) cur += x;
        else if(cur > 0) cur--;
        else ans++;
    }

    cout << ans << endl;
    return 0;
}
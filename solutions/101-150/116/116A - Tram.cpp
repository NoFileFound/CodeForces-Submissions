#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, p = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(p > 0) p -= a;
        p += b;

        ans = max(ans, p);
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1 && b == 1 || a == 1 && c == 1 || b == 1 && c == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}
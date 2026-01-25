#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = a;
    while(a >= b)
    {
        int tmp = a / b;
        ans += tmp;
        a = tmp + a % b;
    }

    cout << ans << endl;
    return 0;
}
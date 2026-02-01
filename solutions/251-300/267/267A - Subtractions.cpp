#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int a, int b)
{
    int ans = 0;
    while(a > 0 && b > 0)
    {
        if(a < b) ans += b / a, b %= a;
        else ans += a / b, a %= b;
    }

    return ans;
}

int main()
{
    int T, a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}
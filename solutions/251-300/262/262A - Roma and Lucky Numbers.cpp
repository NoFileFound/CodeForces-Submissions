#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(int x, int k)
{
    int cnt = 0;
    while(x > 0)
    {
        if(x % 10 == 4 || x % 10 == 7) cnt++;

        if(cnt > k) return false;
        x /= 10;
    }

    return true;
}

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    while(n--)
    {
        int x;
        cin >> x;
        ans += check(x, k);
    }

    cout << ans << endl;
    return 0;
}
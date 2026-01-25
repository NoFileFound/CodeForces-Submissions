#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005], sum, lsum, ans;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        lsum += a[i];
        if(lsum * 2 == sum) ans++;
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[1000100], cnt1, cnt2, cnt3;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) cnt1++;
        else if(a[i] == 2) cnt2++;
        else cnt3++;
    }

    int ans = max(cnt1, max(cnt2, cnt3));
    int mxxid = 0;
    if(ans == cnt1)
    {
        mxxid = 1;
    }
    else if(ans == cnt2)
    {
        mxxid = 2;
    }
    else
    {
        mxxid = 3;
    }

    ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != mxxid) ans++;
    }

    cout << ans << endl;
    return 0;
}
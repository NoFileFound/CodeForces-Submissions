#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[120];

int minel()
{
    int minEl = INT_MAX, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(minEl >= a[i])
        {
            minEl = a[i];
            ans = i;
        }
    }

    return ans;
}

int maxel()
{
    int maxEl = INT_MIN, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(maxEl < a[i])
        {
            maxEl = a[i];
            ans = i;
        }
    }

    return ans;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minidx = minel();
    int maxidx = maxel();

    int ans = 0;
    if (minidx != n - 1)
    {
        ans += (n - 1) - minidx;
    }

    if (maxidx != 0)
    {
        ans += maxidx;
    }

    if (minidx < maxidx) ans--;

    cout << ans << endl;
    return 0;
}
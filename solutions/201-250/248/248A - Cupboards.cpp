#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 10005
using namespace std;

int n, l[MAXN], r[MAXN];

int solve(int a[], int n)
{
    int cnt1 = 0, cnt0 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1) cnt1++;
        else cnt0++;
    }

    return min(cnt1, cnt0);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> l[i] >> r[i];

    cout << solve(l, n) + solve(r, n) << endl;
    return 0;
}
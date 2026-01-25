#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, d, a[120000], ans = 0;

int main()
{
    cin >> n >> d;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int current = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] <= current)
        {
            long long temps = (current - a[i]) / d + 1;
            ans += temps;
            current = a[i] + temps * d;
        }
        else current = a[i];
    }

    cout << ans << endl;
    return 0;
}
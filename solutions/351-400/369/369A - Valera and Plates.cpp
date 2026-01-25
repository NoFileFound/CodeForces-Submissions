#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, k, a[1005], ans = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            if(m > 0) m--;
            else ans++;
        }
        else
        {
            if(k > 0) k--;
            else if(m > 0) m--;
            else ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
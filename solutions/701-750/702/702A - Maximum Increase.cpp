#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[100050], cnt = 1, mx = 1;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i - 1]) cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }

    mx = max(mx, cnt);
    cout << mx << endl;
    return 0;
}
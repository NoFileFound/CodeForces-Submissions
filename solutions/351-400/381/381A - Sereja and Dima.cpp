#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[1069];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1, ans1 = 0, ans2 = 0, state = 1;
    while(l <= r)
    {
        int x;
        if(a[l] > a[r]) x = a[l++];
        else x = a[r--];
        if(state) ans1 += x;
        else ans2 += x;
        state = !state;
    }

    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}
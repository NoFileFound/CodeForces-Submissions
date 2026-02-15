#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, cnt[100069];

int main()
{
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int ans = cnt[4] + cnt[3] + cnt[2] / 2;
    cnt[1] = max(0, cnt[1] - cnt[3]);
    if(cnt[2] & 1)
    {
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    ans += (cnt[1] + 3) / 4;
    cout << ans << endl;
    return 0;
}
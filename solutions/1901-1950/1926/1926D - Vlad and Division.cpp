#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long T, n, a[200006];
map<long long, int> cnt;

int main()
{
    cin >> T;
    while(T--)
    {
        long long ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        for(auto &el : cnt)
        {
            long long i = el.first;
            if(!cnt[i]) continue;

            long long j = i ^ (1LL << 31) - 1;
            if(cnt.count(j))
            {
                long long m = min(cnt[i], cnt[j]);
                ans += m;
                cnt[i] -= m;
                cnt[j] -= m;
            }

            ans += cnt[i];
            cnt[i] = 0;
        }

        cout << ans << endl;
        cnt.clear();
    }

    return 0;
}
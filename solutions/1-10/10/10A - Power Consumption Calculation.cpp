#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, p1, p2, p3, t1, t2, sum = 0, last = -1;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    while(n--)
    {
        int l, r;
        cin >> l >> r;
        sum += (r - l) * p1;
        if(last > 0)
        {
            long long c = l - last;
            sum += min(c, t1) * p1 + min(max(0LL, c - t1), t2) * p2 + max(0LL, c - t1 - t2) * p3;
        }

        last = r;
    }

    cout << sum << endl;
    return 0;
}
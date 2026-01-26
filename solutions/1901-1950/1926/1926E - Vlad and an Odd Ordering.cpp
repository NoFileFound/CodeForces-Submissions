#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, k;
    cin >> T;
    while(T--)
    {
        int p = 1;
        cin >> n >> k;
        while(1)
        {
            int cnt = (n / p + 1) / 2;
            if(k <= cnt) break;

            k -= cnt;
            p <<= 1;
        }

        cout << p * (2 * k - 1) << endl;
    }

    return 0;
}
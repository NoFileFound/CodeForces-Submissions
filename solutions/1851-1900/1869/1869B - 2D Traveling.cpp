#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const long long INF = 1000000000000;
long long x[200005], y[200005];

int main()
{
    int T, n, k, a, b;
    cin >> T;
    while(T--)
    {
        cin >> n >> k >> a >> b;
        for(int i = 1; i <= n; i++)
            cin >> x[i] >> y[i];

        long long r1 = INF, r2 = INF;
        for(int i = 1; i <= k; i++)
        {
            r1 = min(r1, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
            r2 = min(r2, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
        }

        cout << min(llabs(x[a] - x[b]) + llabs(y[a] - y[b]), r1 + r2) << endl;
    }

    return 0;
}

/*
5
6 2 3 5
0 0
1 -2
-2 1
-1 3
2 -2
-3 -3
2 0 1 2
-1000000000 -1000000000
1000000000 1000000000
7 5 4 2
154 147
-154 -147
123 456
20 23
43 20
998 244
353 100
3 1 3 1
0 10
1 20
2 30
4 3 2 4
0 0
-100 100
-1 -1
-1 0
*/
#include <bits/stdc++.h>
#define endl '\n'
#define INF 2000000000
using namespace std;

int main()
{
    int T, n, l, r, c;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int minl = INF, costl = INF, maxr = -INF, costr = INF, cost = INF;
        while(n--)
        {
            cin >> l >> r >> c;
            if(l < minl)
            {
                minl = l;
                costl = c;
                cost = INF;
            }
            else if(l == minl)
                costl = min(costl, c);

            if(r > maxr)
            {
                maxr = r;
                costr = c;
                cost = INF;
            }
            else if(r == maxr)
                costr = min(costr, c);

            if(l == minl && r == maxr)
                cost = min(cost, c);

            cout << min(cost, costl + costr) << endl;
        }
    }

    return 0;
}
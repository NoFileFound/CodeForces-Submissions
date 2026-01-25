#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, d, m, l;
    cin >> n >> d >> m >> l;
    for(int i = 0; i < n; i++)
    {
        long long x = ((i * m + l + 1 + d - 1) / d) * d;
        if(x < m * (i + 1))
        {
            cout << x << endl;
            return 0;
        }
    }

    cout << ((n * m + d - 1) / d) * d << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int a, int b)
{
    return (a == 0 ? b : gcd(b % a, a));
}

int main()
{
    bool simon = true;
    int a, b, n;
    cin >> a >> b >> n;
    while(true)
    {
        int res = gcd((simon ? a : b), n);
        if(n < res) break;

        //cout << (simon ? a : b) << ' ' << n << " --> " << res << endl;
        n -= res;
        simon = !simon;
    }

    cout << (int)simon << endl;
    return 0;
}
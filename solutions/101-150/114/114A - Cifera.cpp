#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int k, l, p = 0;
    cin >> k >> l;
    while(l % k == 0)
    {
        l /= k;
        p++;
    }

    cout << (l > 1 ? "NO" : "YES\n" + to_string(p - 1)) << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, pos = 0, neg = 0;
    cin >> n >> m;
    while(n--)
    {
        int x;
        cin >> x;
        if(x >= 0) pos++;
        else neg++;
    }

    while(m--)
    {
        int l, r;
        cin >> l >> r;
        cout << ((r - l + 1) % 2 == 1 ? 0 : (r - l + 1) / 2 <= min(pos, neg)) << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, t, x, y, a = 0, b = 0;
    cin >> n;
    while(n--)
    {
        cin >> t >> x >> y;
        if(t == 1)
        {
            a += x;
            a -= y;
        }
        else
        {
            b += x;
            b -= y;
        }
    }

    cout << (a >= 0 ? "LIVE" : "DEAD") << endl;
    cout << (b >= 0 ? "LIVE" : "DEAD") << endl;
    return 0;
}
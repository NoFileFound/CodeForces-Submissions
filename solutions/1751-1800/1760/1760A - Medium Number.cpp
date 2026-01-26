#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        int maxx = max({a, b, c});
        int minn = min({a, b, c});
        if(a != maxx && a != minn) cout << a << endl;
        else if(b != maxx && b != minn) cout << b << endl;
        else cout << c << endl;
    }

    return 0;
}
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
        if(a == b && b == c) cout << "YES\n" << a << ' ' << a << ' ' << a << endl;
        else if(a == b && a >= c) cout << "YES\n" << a << ' ' << c << ' ' << c << endl;
        else if(a == c && a >= b) cout << "YES\n" << b << ' ' << a << ' ' << b << endl;
        else if(b == c && b >= a) cout << "YES\n" << a << ' ' << a << ' ' << b << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
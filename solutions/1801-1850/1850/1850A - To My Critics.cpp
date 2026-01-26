#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T, a, b, c;

int main()
{
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        cout << (a + b >= 10 || b + c >= 10 || a + c >= 10 ? "YES" : "NO") << endl;
    }

    return 0;
}
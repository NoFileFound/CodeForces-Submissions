#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, a, b, m;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> m;
        cout << (m / a + m / b + 2) << endl;
    }

    return 0;
}
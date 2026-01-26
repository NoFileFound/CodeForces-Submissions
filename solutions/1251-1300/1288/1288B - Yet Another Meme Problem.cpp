#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        cout << setprecision(0) << fixed << a * floor(log10(b + 1)) << endl;
    }

    return 0;
}
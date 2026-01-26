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
        cout << (a == b ? 0 : ceil(fabs(a - b) / (2.0 * c))) << endl;
    }

    return 0;
}
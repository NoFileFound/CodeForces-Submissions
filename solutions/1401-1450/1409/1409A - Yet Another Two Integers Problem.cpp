#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
    }

    return 0;
}
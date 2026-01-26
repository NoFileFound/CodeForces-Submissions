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
        cout << max(abs(a - b), max(abs(b - c), abs(a - c))) << endl;
    }
    return 0;
}
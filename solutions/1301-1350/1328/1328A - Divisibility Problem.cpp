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
        cout << (b - (a % b)) % b << endl;
    }

    return 0;
}
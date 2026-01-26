#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << (1 << (n / 2 + 1)) - 2 << endl;
    }

    return 0;
}
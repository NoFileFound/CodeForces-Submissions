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
        cout << (1 << __lg(n)) - 1 << endl;
    }

    return 0;
}
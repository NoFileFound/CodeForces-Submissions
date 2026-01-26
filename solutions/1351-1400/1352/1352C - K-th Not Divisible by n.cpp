#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        int a = k / (n - 1);
        int b = k % (n - 1);
        cout << (a * n + (b > 0 ? b : -1)) << endl;
    }

    return 0;
}
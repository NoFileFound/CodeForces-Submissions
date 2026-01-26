#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n, k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        cout << (k * ((n + k - 1) / k) + n - 1) / n << endl;
    }

    return 0;
}
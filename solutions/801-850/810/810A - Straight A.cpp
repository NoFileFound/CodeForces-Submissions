#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << max(0, n * 2 * k - n - sum * 2) << endl;
    return 0;
}
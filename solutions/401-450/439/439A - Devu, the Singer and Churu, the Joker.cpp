#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, d, a[169], sum = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << (sum + (n - 1) * 10 <= d ? (d - sum) / 5 : -1) << endl;
    return 0;
}
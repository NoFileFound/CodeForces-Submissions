#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, mn = INT_MAX;
    long long sum = 0;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        sum += x;
        if(x & 1)
            mn = min(mn, x);
    }

    cout << (sum % 2 == 0 ? sum : sum - mn) << endl;
    return 0;
}
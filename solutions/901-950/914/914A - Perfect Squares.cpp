#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int x)
{
    if(x < 0) return x;
    int r = round(sqrt(x));
    return r * r == x ? INT_MIN : x;
}

int main()
{
    int n, r1 = INT_MIN;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        r1 = max(r1, solve(x));
    }

    cout << r1 << endl;
    return 0;
}
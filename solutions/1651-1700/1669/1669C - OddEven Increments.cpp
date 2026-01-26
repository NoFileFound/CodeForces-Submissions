#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 4000
using namespace std;

int n, a[MAXN];

void solve()
{
    int cntEvenOrig = 0, cntEven = 0, cntOdd = 0;
    for(int i = 1; i <= n; i++)
    {
        int val = a[i];
        if(val % 2 == 0) cntEvenOrig++;
        if((val + (i % 2 ? 0 : 1)) % 2 == 0) cntEven++;
        if((val + (i % 2 ? 1 : 0)) % 2 == 0) cntOdd++;
    }

    cout << (cntEvenOrig == n || cntEvenOrig == 0 || cntEven == n || cntEven == 0 || cntOdd == n || cntOdd  == 0 ? "YES" : "NO") << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        solve();
    }
    return 0;
}

/*
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
*/
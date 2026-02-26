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
        cout << ((k + (n & 1 ? (k - 1) / (n / 2) : 0) - 1) % n) + 1 << endl;
    }

    return 0;
}

/*
7
2 1
2 2
3 1
3 2
3 3
5 5
69 1337
*/
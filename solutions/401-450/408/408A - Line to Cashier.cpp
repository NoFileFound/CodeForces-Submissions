#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k[169], m, ans = INT_MAX;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> k[i];
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 0; j < k[i]; j++)
        {
            cin >> m;
            sum += m * 5 + 15;
        }

        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}

/*
4
1 4 3 2
100
1 2 2 3
1 9 1
7 8
*/
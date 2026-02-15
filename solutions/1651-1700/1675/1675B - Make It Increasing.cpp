#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[45];
    cin >> T;
    while(T--)
    {
        int ans = 0, flag = 1;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = n - 2; i >= 0; i--)
        {
            while(a[i] >= a[i + 1] && a[i] > 0) a[i] /= 2, ans++;
            if(a[i] >= a[i + 1])
            {
                flag = 0;
                break;
            }
        }

        if(!flag)
            ans = -1;

        cout << ans << endl;
    }

    return 0;
}

/*
7
3
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14
*/
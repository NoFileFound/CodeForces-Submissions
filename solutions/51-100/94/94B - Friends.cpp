#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int m, cnt[22];
    cin >> m;
    memset(cnt, 0, sizeof cnt);
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y]++;
    }

    for(int i = 1; i <= 5; i++)
    {
        if(cnt[i] != 2)
        {
            cout << "WIN" << endl;
            return 0;
        }
    }

    cout << "FAIL" << endl;
    return 0;
}
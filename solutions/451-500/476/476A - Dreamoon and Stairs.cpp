#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    bool flag = false;
    int n, m, ans = 0;
    cin >> n >> m;
    for(int i = (n + 1) / 2; i <= n; i++)
    {
        if(i % m == 0)
        {
            ans = i;
            flag = true;
            break;
        }
    }

    if(!flag) ans = -1;
    cout << ans << endl;
    return 0;
}
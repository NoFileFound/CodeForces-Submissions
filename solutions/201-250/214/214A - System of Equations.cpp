#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for(int a = 0; a * a <= n; a++)
    {
        int b = a * a - n;
        if(b * b + a == m) ans++;
    }

    cout << ans << endl;
    return 0;
}
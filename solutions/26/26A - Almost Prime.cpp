#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, divs[3069];
    cin >> n;
    memset(divs, 0, sizeof divs);
    for(int i = 2; i <= n; i++)
    {
        if(!divs[i])
        {
            for(int j = i + i; j <= n; j += i) divs[j]++;
        }
    }

    int ans = 0;
    for(int i = 2; i <= n; i++)
    {
        if(divs[i] == 2) ans++;
    }

    cout << ans << endl;
    return 0;
}
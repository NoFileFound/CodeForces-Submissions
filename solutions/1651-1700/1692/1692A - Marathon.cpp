#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int T, a, b, c, d;
    cin >> T;
    while(T--)
    {
        int ans = 0;

        cin >> a >> b >> c >> d;
        if(a < b) ans++;
        if(a < c) ans++;
        if(a < d) ans++;

        cout << ans << endl;
    }

    return 0;
}
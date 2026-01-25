#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n, d[150], a, b, ans = 0;
    cin >> n;
    for(int i = 1; i < n; i++)
        cin >> d[i];
	
    cin >> a >> b;
    while(a < b)
    {
        ans += d[a];
        a++;
    }

    cout << ans << endl;
    return 0;
}
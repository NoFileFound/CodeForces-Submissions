#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n, a[300], cnt = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == a[i + 1]) cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }

    cout << ans + 1 << endl;
	return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n, k, a[1200], ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] - a[i] > k) break;
            ans++;
        }
    }

    cout << ans * 2 << endl;
    return 0;
}
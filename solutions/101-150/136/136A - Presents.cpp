#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n, a[120];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = i + 1;
    }

    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';

    return 0;
}
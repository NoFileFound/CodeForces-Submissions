#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, a[1069], sum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for(int i = 0; i < min(n, m); i++)
    {
        if(a[i] > 0) break;
        sum += -a[i];
    }

    cout << sum << endl;
    return 0;
}
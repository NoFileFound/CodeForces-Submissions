#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int k, a[105], sum = 0;
    cin >> k;
    for(int i = 1; i <= 12; i++)
        cin >> a[i];

    if(k == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(a + 1, a + 12 + 1, greater<int>());
    for(int i = 1; i <= 12; i++)
    {
        sum += a[i];
        if(sum >= k)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[60];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        cout << *max_element(a, a + n) - *min_element(a, a + n) << endl;
    }

    return 0;
}
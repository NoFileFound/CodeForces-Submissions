#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T, n, a[1500];

int main()
{
    cin >> T;
    while(T--)
    {
        int cnt = 0, cnt2 = 0;
        cin >> n;
        for(int i = 0; i < 2 * n; i++) cin >> a[i];
        for(int i = 0; i < 2 * n; i++)
        {
            if(a[i] % 2 == 0) cnt++;
            else cnt2++;
        }

        cout << (cnt == cnt2 ? "Yes" : "No") << endl;
    }

    return 0;
}
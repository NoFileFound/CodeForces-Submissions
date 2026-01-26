#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[200];
    cin >> T;
    while(T--)
    {
        bool flag = true;
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n - 1; i++)
        {
            if(abs(a[i] - a[i + 1]) > 1)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
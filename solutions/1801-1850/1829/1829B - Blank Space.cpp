#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T, n, a[200], cnt = 0, mcnt = 0;

int main()
{
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                cnt++;
                if(mcnt < cnt) mcnt = cnt;
            }
            else cnt = 0;
        }

        cout << mcnt << endl;
        cnt = mcnt = 0;
    }

    return 0;
}
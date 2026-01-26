#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[200000], cnt = 1, mxcnt = 0;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
    {
        if(a[i - 1] * 2 >= a[i]) cnt++;
        else
        {
            mxcnt = max(mxcnt, cnt);
            cnt = 1;
        }
    }

    mxcnt = max(mxcnt, cnt);
    cout << mxcnt << endl;
    return 0;
}
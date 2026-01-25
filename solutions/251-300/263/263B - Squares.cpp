#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int minn = INT_MAX, minidx = 1, cnt = 1;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] < minn)
        {
            minn = a[i];
            minidx = i;
            cnt = 1;
        }
        else if(a[i] == minn) cnt++;
    }

    if(cnt == 1) cout << minidx << endl;
    else cout << "Still Rozdil" << endl;
    return 0;
}
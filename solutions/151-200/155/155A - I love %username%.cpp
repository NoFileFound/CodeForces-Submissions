#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[10050], ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int minn = a[0];
    int maxx = a[0];
    for(int i = 1; i < n; i++)
    {
        if(minn > a[i])
        {
            minn = a[i];
            ans++;
        }
        else if(maxx < a[i])
        {
            maxx = a[i];
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
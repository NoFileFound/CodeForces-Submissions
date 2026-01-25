#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[105], oddidx = 1, evenidx = 1, oddcnt = 0, evencnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
        if(a[i] % 2 == 0)
        {
            evenidx = i;
            evencnt++;
        }
        else
        {
            oddidx = i;
            oddcnt++;
        }
    }

    cout << (evencnt < oddcnt ? evenidx : oddidx) << endl;
    return 0;
}
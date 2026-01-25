#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cur = 1, mxcur = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] >= a[i - 1])
        {
            cur++;
            mxcur = max(mxcur, cur);
        }
        else cur = 1;
    }

    mxcur = max(mxcur, cur);
    cout << mxcur << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, vb, vs, x[105], xu, yu;
    cin >> n >> vb >> vs;
    for(int i = 1; i <= n; i++)
        cin >> x[i];

    cin >> xu >> yu;
    int ans = 2;
    double mxTime = LLONG_MAX, mxDist = LLONG_MAX;
    for(int i = 2; i <= n; i++)
    {
        double curDist = sqrt(pow(x[i] - xu, 2) + yu * yu), curTime = (double)x[i] / vb + curDist / vs;
        if(curTime < mxTime || (abs(curTime - mxTime) < 1e-9 && curDist < mxDist))
        {
            mxTime = curTime;
            mxDist = curDist;
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}
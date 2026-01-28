#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, b, d, sum = 0, ans = 0;
    cin >> n >> b >> d;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x <= b)
        {
            sum += x;
            if(sum > d)
            {
                ans++;
                sum = 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
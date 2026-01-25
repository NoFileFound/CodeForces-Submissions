#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a, ans = 0;
    cin >> a;
    while(a > 0)
    {
        if(a >= 5) a -= 5;
        else if(a >= 4) a -= 4;
        else if(a >= 3) a -= 3;
        else if(a >= 2) a -= 2;
        else if(a >= 1) a -= 1;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
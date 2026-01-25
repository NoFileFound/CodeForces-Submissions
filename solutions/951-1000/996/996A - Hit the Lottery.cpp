#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while(n > 0)
    {
        if(n >= 100)
        {
            ans++;
            n -= 100;
        }
        else if(n >= 20)
        {
            ans++;
            n -= 20;
        }
        else if(n >= 10)
        {
            ans++;
            n -= 10;
        }
        else if(n >= 5)
        {
            ans++;
            n -= 5;
        }
        else
        {
            ans++;
            n--;
        }
    }

    cout << ans << endl;
    return 0;
}
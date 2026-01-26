#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    ll T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(ll i = 1; ; i++)
        {
            if(n % i)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }

    return 0;
}
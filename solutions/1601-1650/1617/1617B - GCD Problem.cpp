#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 2; ; i++) // fuck O(1) solution
        {
            int a = i;
            int b = n - i - 1;
            if(__gcd(a, b) == 1)
            {
                cout << a << ' ' << b << ' ' << 1 << endl;
                break;
            }
        }
    }

    return 0;
}
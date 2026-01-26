#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        int sum = 3, p = 4;
        cin >> n;
        while(n % sum != 0)
        {
            sum += p;
            p <<= 1;
        }

        cout << n / sum << endl;
    }

    return 0;
}
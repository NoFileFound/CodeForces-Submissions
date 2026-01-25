#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1, b = n;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            a = i;
            b = n / i;
        }
    }

    cout << a << ' ' << b << endl;
    return 0;
}
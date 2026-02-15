#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;
        cout << (a % 2 == sum % 2) << " " << (b % 2 == sum % 2) << " " << (c % 2 == sum % 2) << endl;
    }

    return 0;
}
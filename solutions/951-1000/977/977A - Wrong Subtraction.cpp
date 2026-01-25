#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    while(k > 0)
    {
        if(n % 10 != 0) n--;
        else n /= 10;
        if(n == 0) break;
        k--;
    }

    cout << n << endl;
    return 0;
}
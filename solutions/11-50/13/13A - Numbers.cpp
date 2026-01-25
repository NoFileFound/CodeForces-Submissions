#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int nth_base(int n, int base) {
    int sum = 0;
    while (n > 0)
    {
        int rem = n % base;
/*
        char ch;
        if (rem < 10)
        {
            ch = rem + '0';
            sum += rem;
        }
        else
            ch = rem - 10 + 'A';
*/
        sum += rem;
        n /= base;
    }

    return sum;
}

int main()
{
    int n, sum = 0;
    cin >> n;
    for(int i = 2; i <= n - 1; i++)
		sum += nth_base(n, i);

    cout << sum / __gcd(sum, n - 2) << '/' << (n - 2) / __gcd(sum, n - 2) << endl;
    return 0;
}
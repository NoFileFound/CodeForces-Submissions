#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool prime(long long n)
{
    if(n <= 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;
    if(n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }

    return true;
}

int main()
{
    long long T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        long long a = n + 1;
        while(!prime(a)) a++;
        long long b = a + n;
        while(!prime(b)) b++;
        cout << a * b << endl;
    }

    return 0;
}
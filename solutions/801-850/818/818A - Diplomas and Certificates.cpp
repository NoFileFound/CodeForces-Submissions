#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long diplo = (n / 2) / (k + 1);
    long long certs = k * diplo;
    cout << diplo << ' ' << certs << ' ' << n - (diplo + certs) << endl;
    return 0;
}
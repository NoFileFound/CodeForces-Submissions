#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil((double)n / a) * ceil((double)m / a)) << endl;
    return 0;
}
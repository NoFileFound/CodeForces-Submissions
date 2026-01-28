#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[100069], b[100069];

int main()
{
    int na, nb, k, m;
    cin >> na >> nb >> k >> m;
    for(int i = 0; i < na; i++)
        cin >> a[i];

    for(int i = 0; i < nb; i++)
        cin >> b[i];

    cout << (a[k - 1] < b[nb - m] ? "YES" : "NO") << endl;
    return 0;
}
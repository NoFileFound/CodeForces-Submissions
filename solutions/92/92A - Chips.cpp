#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; m > 0; i++)
    {
        if(i > n) i = 1;
        if(i > m) break;
        m -= i;
    }

    cout << m << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

char a[3][3];
const int n = 3;

bool is_symetric()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[n - 1 - i][n - 1 - j]) return false;
        }
    }
    return true;
}

int main()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << (is_symetric() ? "YES" : "NO") << endl;
    return 0;
}
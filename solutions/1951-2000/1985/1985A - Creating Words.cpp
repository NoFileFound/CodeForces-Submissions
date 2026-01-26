#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << ' ' << b << endl;
    }
    return 0;
}
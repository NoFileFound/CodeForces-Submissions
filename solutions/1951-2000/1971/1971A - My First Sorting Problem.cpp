#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b;
        cin >> a >> b;
        if(a > b) swap(a, b);
        cout << a << ' ' << b << endl;
    }
    return 0;
}
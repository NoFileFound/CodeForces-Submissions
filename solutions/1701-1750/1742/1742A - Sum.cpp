#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        cout << (a + b == c || b + c == a || a + c == b ? "YES" : "NO") << endl;
    }
    
    return 0;
}
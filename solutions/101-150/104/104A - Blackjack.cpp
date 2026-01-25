#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    if(n <= 10 || n > 21)
    {
        // impossible
        cout << 0 << endl;
        return 0;
    }

    n -= 10;
    cout << (n == 10 ? 15 : 4) << endl;
    return 0;
}
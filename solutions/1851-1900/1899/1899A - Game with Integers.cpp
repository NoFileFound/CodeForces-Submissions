#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << (n % 3 != 0 ? "First" : "Second") << endl;
    }

    return 0;
}
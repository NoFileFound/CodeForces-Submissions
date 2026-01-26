#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        cout << "Division " << (n < 1400 ? 4 : n < 1600 ? 3 : n < 1900 ? 2 : 1) << endl;
    }

    return 0;
}
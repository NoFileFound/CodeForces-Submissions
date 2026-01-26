#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a1, b1, a2, b2;
    cin >> T;
    while(T--)
    {
        cin >> a1 >> b1 >> a2 >> b2;
        cout << (max(a1, b1) == max(a2, b2) && min(a1, b1) + min(a2, b2) == max(a1, b1) ? "Yes" : "No") << endl;
    }

    return 0;
}
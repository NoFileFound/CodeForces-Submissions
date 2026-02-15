#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if(t == 10 && n == 1)
        cout << -1 << endl;
    else
        cout << to_string(t) + string(n - ((int)log10(t) + 1), '0') << endl;

    return 0;
}
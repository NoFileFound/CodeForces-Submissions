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
        cout << n << ' ';
        for(int i = 1; i < n; i++)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}
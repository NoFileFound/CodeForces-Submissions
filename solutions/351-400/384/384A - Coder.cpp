#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n * n + 1) / 2 << endl;
    for(int i = 0; i < n; i++, cout << endl)
    {
        for(int j = 0; j < n; j++)
        {
            if((i + j) % 2 != 0) cout << '.';
            else cout << 'C';
        }
    }

    return 0;
}
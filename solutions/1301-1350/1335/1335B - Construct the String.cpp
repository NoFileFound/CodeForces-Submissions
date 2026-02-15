#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a, b;
    cin >> T;
    while(T--)
    {
        cin >> n >> a >> b;
        for(int i = 0; n--; i++)
        {
            cout << (char)('a' + (i % b));
        }

        cout << endl;
    }

    return 0;
}
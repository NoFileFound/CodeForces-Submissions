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
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int k = (j - i + n) % n, l = n / 2;
                if(n & 1)
                    cout << (k <= l ? 1 : -1) << ' ';
                else
                    cout << (k < l ? 1 : k == l ? 0 : -1) << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
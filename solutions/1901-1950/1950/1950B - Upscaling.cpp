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
        for(int i = 0; i < n * 2; i++, cout << endl)
        {
            for(int j = 0; j < n * 2; j++)
            {
                if((i / 2 + j / 2) % 2 == 0) cout << '#';
                else cout << '.';
            }
        }
    }

    return 0;
}
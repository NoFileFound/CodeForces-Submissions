#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        int x = 0, y = 0;
        cin >> n;
        for(int i = 1, state = 1; n > 0; i *= 10)
        {
            int d = n % 10;
            x += (d / 2) * i;
            y += (d / 2) * i;
            if(d & 1)
            {
                if(state) x += i;
                else y += i;
                state ^= 1;
            }

            n /= 10;
        }

        cout << x << ' ' << y << endl;
    }

    return 0;
}
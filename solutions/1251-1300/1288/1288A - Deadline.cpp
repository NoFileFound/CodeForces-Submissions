#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n, d;
    cin >> T;
    while(T--)
    {
        cin >> n >> d;
        bool flag = false;
        for(int i = 0; i * i <= d; i++)
        {
            if(i + (d + i) / (i + 1) <= n)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
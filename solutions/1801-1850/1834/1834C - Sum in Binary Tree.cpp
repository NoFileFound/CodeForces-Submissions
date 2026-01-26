#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long T, n, sum = 0;

int main()
{
    cin >> T;
    while(T--)
    {
        cin >> n;
        while(n > 0)
        {
            sum += n;
            n /= 2;
        }
		
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
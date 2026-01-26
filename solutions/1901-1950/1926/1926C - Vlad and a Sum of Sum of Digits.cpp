#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int digsum(int n)
{
    int ans = 0;
    while(n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }

    return ans;
}

long long p[200006];
void precomput()
{
    p[0] = 0;
    for(int i = 1; i <= 200006; i++)
        p[i] = p[i - 1] + digsum(i);
}

int main()
{
    int n, T;
    precomput();
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << p[n] << endl;
    }

    return 0;
}
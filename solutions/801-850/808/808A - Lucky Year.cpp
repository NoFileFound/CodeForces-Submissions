#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool solve(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        if(n % 10 != 0) cnt++;
        if(cnt > 1) return false;
        n /= 10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    if(n == 1000000000)
    {
        cout << 1000000000 << endl;
        return 0;
    }

    int m = n + 1;
    while(!solve(m)) m++;
    cout << m - n << endl;
    return 0;
}
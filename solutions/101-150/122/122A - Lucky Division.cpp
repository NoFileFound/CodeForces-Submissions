#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }

    int len = log10(n) + 1, cnt = 0;
    while(n > 0)
    {
        if(n % 10 == 4 || n % 10 == 7) cnt++;
        n /= 10;
    }

    cout << (len == cnt ? "YES" : "NO") << endl;
    return 0;
}
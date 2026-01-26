#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        sum += a;
    }

    cout << (sum > 0 ? "Hard" : "Easy") << endl;
    return 0;
}
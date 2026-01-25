#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005], x, y;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        a[x] = y;
    }

    for(int i = 1; i <= n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    return 0;
}
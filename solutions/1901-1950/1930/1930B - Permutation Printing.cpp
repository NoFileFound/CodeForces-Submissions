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
        int l = 1, r = n;
        while(l < r)
        {
            cout << r << ' ' << l << ' ';
            l++;
            r--;
        }

        if(l == r)
            cout << l << endl;
        else
            cout << endl;
    }

    return 0;
}
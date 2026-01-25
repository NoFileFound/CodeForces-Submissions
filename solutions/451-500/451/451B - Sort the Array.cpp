#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long n, a[100000];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    while(l + 1 < n && a[l] <= a[l + 1]) l++;
    while(r > 0 && a[r - 1] <= a[r]) r--;
    if(l == n - 1)
    {
        cout << "yes\n1 1" << endl;
        return 0;
    }

    if((l > 0 && a[r] < a[l - 1]) || (r < n - 1 && a[l] > a[r + 1]))
    {
        cout << "no" << endl;
        return 0;
    }

    for(int i = l; i < r; i++)
    {
        if(a[i] < a[i + 1])
        {
            cout << "no" << endl;
            return 0;
        }
    }

    ///if(l + 1 > r + 1) l = r = 0;
    cout << "yes\n" << l + 1 << " " << r + 1 << endl;
    return 0;
}
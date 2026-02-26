#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[169];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << (*max_element(a, a + n) * n - accumulate(a, a + n, 0)) << endl;
    return 0;
}
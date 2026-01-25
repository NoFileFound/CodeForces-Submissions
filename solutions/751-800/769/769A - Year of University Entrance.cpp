#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[5];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << (*max_element(a, a + n) + *min_element(a, a + n)) / 2 << endl;
    return 0;
}
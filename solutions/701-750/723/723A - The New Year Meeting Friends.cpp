#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int x, x1, x2;
    cin >> x >> x1 >> x2;
    if(x > x1) swap(x, x1);
    if(x1 > x2) swap(x1, x2);
    if(x > x1) swap(x, x1);

    cout << x2 - x << endl;
    return 0;
}
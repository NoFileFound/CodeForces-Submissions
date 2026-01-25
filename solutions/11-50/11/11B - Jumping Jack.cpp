#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long x;
    cin >> x;
    x = llabs(x);

    int i = 0, sum = 0;
    while(sum < x || (sum - x) % 2) i++, sum += i;
    cout << i << endl;
    return 0;
}
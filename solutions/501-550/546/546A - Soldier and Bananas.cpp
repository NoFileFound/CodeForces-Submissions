#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int w, n, k;
    cin >> k >> n >> w;
    cout << max(0, k * (w * (w + 1) / 2) - n) << endl;
    return 0;
}
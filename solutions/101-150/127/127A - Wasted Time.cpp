#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k;
    double x[1005], y[1005];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double len = 0;
    for(int i = 0; i < n - 1; i++)
    {
        double dx = x[i + 1] - x[i], dy = y[i + 1] - y[i];
        len += sqrt(dx * dx + dy * dy);
    }

    cout << fixed << setprecision(10) << (len * k) / 50.0 << endl;
    return 0;
}
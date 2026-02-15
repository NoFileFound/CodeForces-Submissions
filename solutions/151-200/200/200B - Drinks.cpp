#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << sum / n << endl;
    return 0;
}
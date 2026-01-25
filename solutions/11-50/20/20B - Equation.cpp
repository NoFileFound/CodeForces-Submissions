#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if(a == 0)
    {
        if(b == 0) cout << (c == 0 ? -1 : 0) << endl;
        else cout <<  setprecision(10) << fixed << 1 << endl << -c * 1.0 / b << endl;
        return 0;
    }

    long long d = b * b - 4 * a * c;
    if(d < 0) cout << 0 << endl;
    else
    {
        double root1 = (-b - sqrt(d)) / (2 * a);
        double root2 = (-b + sqrt(d)) / (2 * a);

        cout << (root1 == root2 ? 1 : 2) << endl;
        if(root1 == root2) cout << setprecision(10) << fixed << root1 << endl;
        else  cout << setprecision(10) << fixed << min(root1, root2) << endl << max(root1, root2) << endl;
    }

    return 0;
}
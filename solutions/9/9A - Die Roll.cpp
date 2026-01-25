#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int a, int b)
{
    return (a == 0 ? b : gcd(b % a, a));
}

int main()
{
    int y, w;
    cin >> y >> w;
    int probability = 6 - max(y, w) + 1;
    if(probability <= 0)
    {
        cout << "0/1" << endl;
        return 0;
    }

    cout << (probability / gcd(probability, 6)) << '/' << (6 / gcd(probability, 6)) << endl;
    return 0;
}
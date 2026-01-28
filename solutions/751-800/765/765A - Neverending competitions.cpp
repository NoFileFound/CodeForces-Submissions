#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, in = 0, out = 0;
    string s;
    cin >> n >> s;
    while(n--)
    {
        string a, x, y;
        cin >> a;
        x = a.substr(0, 3);
        y = a.substr(5, 3);
        if(x == s) out++;
        else in++;
    }

    cout << (out == in ? "home" : "contest") << endl;
    return 0;
}
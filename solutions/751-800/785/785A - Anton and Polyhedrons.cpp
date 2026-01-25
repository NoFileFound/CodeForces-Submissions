#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, ans = 0;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        if(s == "Tetrahedron") ans += 4;
        else if(s == "Cube") ans += 6;
        else if(s == "Octahedron") ans += 8;
        else if(s == "Dodecahedron") ans += 12;
        else ans += 20;
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string ans = "";
    cin >> n;
    for(int i = 0; i < n; i++)
        ans += (i % 4 < 2 ? 'a' : 'b');

    cout << ans << endl;
    return 0;
}
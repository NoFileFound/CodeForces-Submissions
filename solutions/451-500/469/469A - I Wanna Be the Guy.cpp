#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, m;
    set<int> se;
    cin >> n >> m;
    while(m--)
    {
        int x;
        cin >> x;
        se.insert(x);
    }

    cin >> m;
    while(m--)
    {
        int x;
        cin >> x;
        se.insert(x);
    }

    cout << (se.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
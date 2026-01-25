#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x >= 1 && x <= n) s.insert(x);
    }

    cout << n - s.size() << endl;
    return 0;
}
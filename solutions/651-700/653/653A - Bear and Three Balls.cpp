#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    bool flag = false;
    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto &el : s)
    {
        if(s.count(el + 1) && s.count(el + 2))
        {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}
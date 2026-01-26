#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T;
multiset<int> ms;

int main()
{
    cin >> T;
    while(T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ms.insert({a, b, c});
        if(ms.count(a) == 1)
            cout << a << endl;
        else if(ms.count(b) == 1)
            cout << b << endl;
        else
            cout << c << endl;

        ms.clear();
    }

    return 0;
}
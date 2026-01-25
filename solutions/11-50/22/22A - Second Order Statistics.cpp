#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
set<int> s;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if(s.size() > 1)
    {
        s.erase(*min_element(s.begin(), s.end()));
        cout << *min_element(s.begin(), s.end()) << endl;
    }
    else cout << "NO" << endl;
    return 0;
}

/*
5
1 2 3 1 1
*/
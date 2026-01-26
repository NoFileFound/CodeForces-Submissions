#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, q;
    deque<int> de;
    cin >> n >> q;
    while(n--)
    {
        int x;
        cin >> x;
        de.push_back(x);
    }

    while(q--)
    {
        int x, idx = 0;
        cin >> x;
        idx = find(de.begin(), de.end(), x) - de.begin();
        if(idx != -1)
        {
            de.erase(de.begin() + idx);
            de.push_front(x);
        }

        cout << idx + 1 << ' ';
    }

    return 0;
}
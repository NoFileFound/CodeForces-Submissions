#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    int T, n, a[169];
    map<int, int> mp;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int x = 0;
        for(auto &el : mp)
        {
            if(el.second == 1)
            {
                x = el.first;
                break;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                cout << i + 1 << endl;
                break;
            }
        }

        mp.clear();
    }

    return 0;
}
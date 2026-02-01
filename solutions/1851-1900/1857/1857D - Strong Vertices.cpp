#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[200069], b[200069], c[200069];

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        for(int i = 1; i <= n; i++)
            cin >> b[i];

        for(int i = 1; i <= n; i++)
            c[i] = a[i] - b[i];

        int mx = *max_element(c + 1, c + n + 1);
        vector<int> v;
        for(int i = 1; i <= n; i++)
        {
            if(c[i] == mx)
                v.push_back(i);
        }

        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';

        cout << endl;
    }

    return 0;
}
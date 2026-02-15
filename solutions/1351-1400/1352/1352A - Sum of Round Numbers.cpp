#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    vector<int> v;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int p = 1;
        while(n > 0)
        {
            int d = n % 10;
            if(d > 0) v.push_back(d * p);
            n /= 10;
            p *= 10;
        }

        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';

        cout << endl;
        v.clear();
    }

    return 0;
}
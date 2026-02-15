#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    while(n--)
    {
        pair<int, int> x;
        cin >> x.first >> x.second;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].first != v[i].second)
        {
            cout << "rated" << endl;
            return 0;
        }
    }

    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i].first < v[i + 1].first)
        {
            cout << "unrated" << endl;
            return 0;
        }
    }

    cout << "maybe" << endl;
    return 0;
}
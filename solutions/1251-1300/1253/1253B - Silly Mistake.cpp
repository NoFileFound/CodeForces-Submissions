#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100069];
set<int> used, found;

bool is_found(int x)
{
    return (x < 0 ? !used.count(-x) : used.count(x) || found.count(x));
}

int main()
{
    vector<int> ans;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int curr = 0;
    for(int i = 0; i < n;  i++)
    {
        curr++;
        if(is_found(a[i]))
        {
            cout << -1 << endl;
            return 0;
        }

        if(a[i] > 0) { used.insert(a[i]); found.insert(a[i]); }
        else used.erase(-a[i]);

        if(used.empty())
        {
            ans.push_back(curr);
            curr = 0;
            found.clear();
        }
    }

    if(!used.empty())
    {
        cout << -1 << endl;
        return 0;
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k;
    set<int> st;
    vector<int> ans;
    cin >> n >> k;
    for(int i = 0; n--; i++)
    {
        int x;
        cin >> x;
        if(st.count(x) == 0)
        {
            st.insert(x);
            ans.push_back(i + 1);
        }
    }

    if(st.size() < k)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for(int i = 0; i < k; i++)
        cout << ans[i] << ' ';

    return 0;
}
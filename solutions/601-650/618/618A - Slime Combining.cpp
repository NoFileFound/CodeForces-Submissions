#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    stack<int> st;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        st.push(1);
        while(st.size() >= 2)
        {
            int u = st.top();
            st.pop();
            int w = st.top();
            st.pop();

            if(u == w) st.push(u + 1);
            else
            {
                st.push(w);
                st.push(u);
                break;
            }
        }
    }

    vector<int> ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}
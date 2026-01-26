#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    set<int> st;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        cout << (st.size() % 2 == n % 2 ? st.size() : st.size() - 1) << endl;
        st.clear();
    }
    
    return 0;
}
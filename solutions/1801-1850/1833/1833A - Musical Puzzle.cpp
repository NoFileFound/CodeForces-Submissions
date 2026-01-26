#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T, n;
set<string> st;
string s;

int main()
{
    cin >> T;
    while(T--)
    {
        cin >> n >> s;
        for(int i = 0; i < s.size() - 1; i++)
        {
            st.insert(s.substr(i, 2));
        }

        cout << st.size() << endl;
        st.clear();
    }

    return 0;
}
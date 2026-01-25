#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> st;
    while(n--)
    {
        string s, s2;
        cin >> s >> s2;
        st.insert(s + "|" + s2);
    }

    cout << st.size() << endl;
    return 0;
}
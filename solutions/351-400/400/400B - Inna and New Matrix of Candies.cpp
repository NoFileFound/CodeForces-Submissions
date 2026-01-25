#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sPos = s.find('S'), gPos = s.find('G');
        if(sPos < gPos)
        {
            cout << -1 << endl;
            return 0;
        }

        st.insert(sPos - gPos);
    }

    cout << st.size() << endl;
    return 0;
}
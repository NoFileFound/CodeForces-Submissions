#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    stack<int> st;
    cin >> s;
    int lasttop = -1, mxlen = 0, cnt = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') st.push(i);
        else
        {
            if(st.empty()) lasttop = i;
            else
            {
                st.pop();
                int curlen = i - (st.empty() ? lasttop : st.top());
                if(mxlen < curlen)
                {
                    mxlen = curlen;
                    cnt = 1;
                }
                else if(curlen == mxlen) cnt++;
            }
        }
    }

    cout << mxlen << " " << cnt << endl;
    return 0;
}
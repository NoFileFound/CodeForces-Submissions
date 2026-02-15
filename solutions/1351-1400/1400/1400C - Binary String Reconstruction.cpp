#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, x;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> s >> x;
        int n = s.size();
        string res(n, '1');
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                if(i - x >= 0) res[i - x] = '0';
                if(i + x < n) res[i + x] = '0';
            }
        }

        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            char ch = '0';
            if((i - x >= 0 && res[i - x] == '1') || (i + x < n && res[i + x] == '1')) ch = '1';
            if(ch != s[i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? res : "-1") << endl;
    }

    return 0;
}
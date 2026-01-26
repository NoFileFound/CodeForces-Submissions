#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s;
    cin >> T;
    while(T--)
    {
        bool flag = false;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '8' && s.size() - i >= 11)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    
    return 0;
}
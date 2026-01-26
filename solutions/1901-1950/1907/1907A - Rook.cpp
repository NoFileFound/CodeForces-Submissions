#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while(T--)
    {
        vector<string> ans;
        cin >> s;
        int c = s[0] - 'a' + 1;
        int r = s[1] - '0';
        for(int i = 1; i <= 8; i++)
        {
            if(i != c) ans.push_back(string(1, 'a' + i - 1) + s[1]);
            if(i != r) ans.push_back(string(1, s[0]) + to_string(i));
        }

        for(auto &el : ans)
            cout << el << endl;
    }

    return 0;
}
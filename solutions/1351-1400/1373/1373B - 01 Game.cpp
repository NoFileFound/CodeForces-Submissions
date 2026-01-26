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
        int cnt0 = 0, cnt1 = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }

        cout << (min(cnt1, cnt0) & 1 ? "DA" : "NET") << endl;
    }

    return 0;
}
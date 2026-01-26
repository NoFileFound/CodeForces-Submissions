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
        int cnt0 = 0, cntE = 0, sum = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') cnt0++;
            if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8') cntE++;
            sum += (s[i] - '0');
        }

        cout << (sum % 3 == 0 && cnt0 > 0 && cntE >= 2 ? "red" : "cyan") << endl;
    }

    return 0;
}
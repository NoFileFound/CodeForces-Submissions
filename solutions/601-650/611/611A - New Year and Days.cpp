#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    getline(cin, s);
    int n = 0;
    for(int i = 0; i < s.size() && isdigit(s[i]); i++)
       n = n * 10 + (s[i] - '0');

    if(s.find("week") != -1)
        cout << (n == 5 || n == 6 ? 53 : 52) << endl;
    else
    {
        int ans = 0;
        for(int i = 0; i < 12; i++)
        {
            if(n <= month[i]) ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
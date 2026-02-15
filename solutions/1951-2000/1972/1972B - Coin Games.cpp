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
        int sum = 0;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i++)
            sum += (s[i] == 'U' ? 1 : 0);

        cout << (sum % 2 == 0 ? "NO" : "YES") << endl;
    }

    return 0;
}
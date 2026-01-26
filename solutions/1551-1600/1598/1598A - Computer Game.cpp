#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        string s1, s2;
        cin >> n >> s1 >> s2;
        bool ans = false;
        for(int i = 0; i < n; i++)
            ans |= (s1[i] == '1' && s2[i] == '1');

        cout << (ans ? "NO" : "YES") << endl;
    }

    return 0;
}
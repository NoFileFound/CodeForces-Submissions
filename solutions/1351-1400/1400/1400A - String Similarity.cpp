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
        cin >> n >> s;
        for(int i = 0; i < n; i++)
            cout << s[n - 1];
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n - 1; i++)
    {
        if((s[i] == 'U' && s[i + 1] == 'R') || (s[i] == 'R' && s[i + 1] == 'U'))
        {
            cnt++;
            i++;
        }
    }

    cout << n - cnt << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        map<int, queue<char>> freq;
        for(char ch = 'a'; ch <= 'z'; ch++) freq[0].push(ch);
        string ans = "";
        cin >> n;
        while(n--)
        {
            int x;
            cin >> x;
            char ch = freq[x].front();
            freq[x].pop();
            ans += ch;
            freq[x + 1].push(ch);
        }

        cout << ans << endl;
    }

    return 0;
}
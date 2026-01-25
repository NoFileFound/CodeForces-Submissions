#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string ans = "";
    char ch;
    while(cin >> ch)
    {
        ch = tolower(ch);
        if(ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i')
        {
            ans += '.';
            ans += ch;
        }
    }

    cout << ans << endl;
    return 0;
}
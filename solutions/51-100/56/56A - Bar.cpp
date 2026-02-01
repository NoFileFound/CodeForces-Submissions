#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, ans = 0;
    string alco[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"}, s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(isdigit(s[0]))
        {
            if(s.size() == 1) s = "0" + s;
            if(s.size() == 2 && s < "18") ans++;
        }
        else
        {
            for(int i = 0; i < 11; i++)
            {
                if(s == alco[i])
                {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
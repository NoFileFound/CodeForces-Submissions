#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, x = 0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[0] == s[1])
        {
            if(s[0] == '+') x++;
            else x--;
        }
        else if(s[1] == s[2])
        {
            if(s[1] == '+') x++;
            else x--;
        }
    }
	
    cout << x << endl;
    return 0;
}
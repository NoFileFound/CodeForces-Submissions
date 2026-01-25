#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        if(s.find(ch) == -1 && s.find((char)(ch - 32)) == -1)
        {
            //cout << ch << ' ' << (char)(ch - 32) << endl;
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
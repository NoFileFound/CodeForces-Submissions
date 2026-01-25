#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string pat = "heidi";
    int i = 0;
    char ch;
    while(cin >> ch)
    {
        if(ch == pat[i]) i++;
        if(i == pat.size())
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
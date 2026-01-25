#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    char ch;
    while(cin >> ch)
    {
        if(ch == 'H' || ch == 'Q' || ch == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
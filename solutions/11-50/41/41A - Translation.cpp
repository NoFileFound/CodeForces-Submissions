#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string a, b, tmp="";
    cin >> a >> b;

    tmp = a;
    reverse(tmp.begin(), tmp.end());
    if(tmp == b)
    {
        cout << "YES" << endl;
        return 0;
    }

    tmp = b;
    reverse(tmp.begin(), tmp.end());
    if(tmp == a)
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}
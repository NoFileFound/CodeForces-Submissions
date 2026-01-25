#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++)
        a[i] = tolower(a[i]);

    for(int i = 0; i < b.size(); i++)
        b[i] = tolower(b[i]);


    cout << (a == b ? 0 : (a > b ? 1 : -1)) << endl;
    return 0;
}
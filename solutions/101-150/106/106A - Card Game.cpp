#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s = "6789TJQKA", a, b;
    char ch;
    cin >> ch >> a >> b;
    cout << (a[1] == b[1] ? (s.find(a[0]) > s.find(b[0]) ? "YES" : "NO") : a[1] == ch && b[1] != ch ? "YES" : "NO") << endl;
    return 0;
}
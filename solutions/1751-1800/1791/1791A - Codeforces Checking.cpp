#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string codeforces = "codeforces";
    int T;
    cin >> T;
    while(T--)
    {
        char ch;
        cin >> ch;
        cout << (codeforces.find(ch) != -1 ? "YES" : "NO") << endl;
    }

    return 0;
}
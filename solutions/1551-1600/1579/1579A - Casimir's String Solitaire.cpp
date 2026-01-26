#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int cntA = 0, cntB = 0, cntC = 0;
        string s;
        cin >> s;
        cntA = count(s.begin(), s.end(), 'A');
        cntB = count(s.begin(), s.end(), 'B');
        cntC = count(s.begin(), s.end(), 'C');

        cout << (cntA + cntC == cntB ? "YES" : "NO") << endl;
    }

    return 0;
}
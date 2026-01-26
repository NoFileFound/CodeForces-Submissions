#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> s;
        int cntA = count(s.begin(), s.end(), 'A');
        int cntB = count(s.begin(), s.end(), 'B');
        cout << (cntA > cntB ? 'A' : 'B') << endl;
    }
	
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s, s1;
    cin >> T;
    while(T--)
    {
        cin >> n >> s >> s1;
        int cntS = 0, cntS1 = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] > s1[i]) cntS++;
            else if(s[i] < s1[i]) cntS1++;
        }

        cout << (cntS > cntS1 ? "RED" : cntS == cntS1 ? "EQUAL" : "BLUE") << endl;
    }

    return 0;
}
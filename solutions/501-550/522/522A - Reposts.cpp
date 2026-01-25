#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, mxlvl = 1;
    unordered_map<string, int> lvl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s, s1, s2;
        cin >> s >> s1 >> s2;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        lvl[s] = lvl[s2] + 1;
        mxlvl = max(mxlvl, lvl[s]);
    }

    cout << mxlvl + 1 << endl;
    return 0;
}

/*
5
tourist reposted Polycarp
Petr reposted Tourist
WJMZBMR reposted Petr
sdya reposted wjmzbmr
vepifanov reposted sdya
*/
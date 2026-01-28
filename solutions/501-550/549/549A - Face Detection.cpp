#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    vector<string> vs;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        vs.push_back(x);
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            string tmp = "";
            tmp += vs[i][j];
            tmp += vs[i][j + 1];
            tmp += vs[i + 1][j];
            tmp += vs[i + 1][j + 1];

            ///__debug(i+j, {tmp})
            sort(tmp.begin(), tmp.end());
            if(tmp == "acef") ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

/*
4 4
xxxx
xfax
xcex
xxxx
*/
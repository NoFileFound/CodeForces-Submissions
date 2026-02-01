#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n, plusi, minusi, a, b, c, d, e;
    string s;
    map<string, int> mp;
    cin >> n;
    while(n--)
    {
        cin >> s >> plusi >> minusi >> a >> b >> c >> d >> e;
        mp[s] = a + b + c + d + e + 100 * plusi - 50 * minusi;
    }

    cout << max_element(mp.begin(), mp.end(), cmp)->first << endl;
    return 0;
}
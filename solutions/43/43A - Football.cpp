#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check_map(const pair<string,int>& a, const pair<string,int>& b)
{
    return a.second < b.second;
}

int n;
map<string, int> mp;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    cout <<(*(max_element(mp.begin(), mp.end(), check_map))).first << endl;
	return 0;
}
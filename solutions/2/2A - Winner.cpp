#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, scores[1024];
string names[1024];
map<string, int> mp, mp2;

bool check_map(const pair<string,int>& a, const pair<string,int>& b)
{
    return a.second < b.second;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> names[i] >> scores[i];
        mp[names[i]] += scores[i];
    }

    int maxscore = (*(max_element(mp.begin(), mp.end(), check_map))).second;
    for(int i = 0; i < n; i++)
    {
        mp2[names[i]] += scores[i];
        if(mp2[names[i]] >= maxscore && mp[names[i]] == maxscore)
        {
            cout << names[i] << endl;
            break;
        }
    }

    return 0;
}
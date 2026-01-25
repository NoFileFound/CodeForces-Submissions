#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    string s;
    map<string, int> freq;
    cin >> n >> s;
    for(int i = 0; i < s.size() - 1; i++)
    {
        string tmp = s.substr(i, 2);
        freq[tmp]++;
    }

    cout << max_element(freq.begin(), freq.end(), cmp)->first << endl;
    return 0;
}
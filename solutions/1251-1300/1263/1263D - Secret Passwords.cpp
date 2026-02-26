#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int p[26], sz[26], used[26];

void precomput()
{
    for(int i = 0; i < 26; i++)
    {
        p[i] = i;
        sz[i] = 1;
    }
}

int find_root(int s)
{
    return (s == p[s] ? s : p[s] = find_root(p[s]));
}

void add_edge(int x, int y)
{
    x = find_root(x);
    y = find_root(y);
    if(x != y)
    {
        if(sz[x] < sz[y]) swap(x, y);
        p[y] = x;
        sz[x] += sz[y];
    }
}

int main()
{
    int n;
    string s;
    cin >> n;
    precomput();
    while(n--)
    {
        cin >> s;
        for(int i = 0; i < s.size(); i++)
            used[s[i] - 'a'] = 1;

        for(int i = 1; i < s.size(); i++)
            add_edge(s[i - 1] - 'a', s[i] - 'a');
    }

    set<int> ans;
    for(int i = 0; i < 26; i++)
        if(used[i]) ans.insert(find_root(i));

    cout << ans.size() << endl;
    return 0;
}
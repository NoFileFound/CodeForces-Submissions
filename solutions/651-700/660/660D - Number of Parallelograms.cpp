#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct cell
{
    int x, y;
    cell() {};
    cell(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    bool operator<(const cell &other) const
    {
        if(x != other.x) return x < other.x;
        return y < other.y;
    }
};

vector<cell> v;
map<cell, int> mp;
int n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(cell(x, y));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
            mp[cell(v[i].x + v[j].y, v[i].y + v[j].x)]++;
    }

    int ans = 0;
    for(auto &el : mp)
        ans += (el.second * (el.second - 1)) / 2;

    cout << ans << endl;
    return 0;
}
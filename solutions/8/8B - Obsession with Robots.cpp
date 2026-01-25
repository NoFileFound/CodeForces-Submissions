#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct info
{
    int x, y;
    info() {};
    info(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

map<char, info> dir = {{'L', {-1, 0}}, {'R', {1, 0}}, {'U', {0, 1}}, {'D', {0, -1}}};
vector<info> path;

bool solve(int i, int x, int y, string s)
{
    if(i == s.size()) return true;
    int nbx = x + dir[s[i]].x, nby = y + dir[s[i]].y;
    for(int i = 0; i < path.size(); i++)
    {
        info cur = path[i];
        if(cur.x == nbx && cur.y == nby)
            return false;

        int dx = abs(cur.x - nbx);
        int dy = abs(cur.y - nby);
        if(dx + dy == 1 && !(cur.x == x && cur.y == y))
            return false;
    }

    path.push_back(info(nbx, nby));
    return solve(i + 1, nbx, nby, s);
}

int main()
{
    string s;
    cin >> s;
    path.push_back({0, 0});
    cout << (solve(0, 0, 0, s) ? "OK" : "BUG") << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, used[502][502];
char a[502][502];

struct cell
{
    int x, y;
    cell() {};
    cell(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    cell operator + (cell c)
    {
        cell res(x + c.x, y + c.y);
        return res;
    }

    bool is_valid()
    {
        return x > 0 && y > 0 && x <= n && y <= m;
    }
};

cell dir[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool DFS(cell c)
{
    used[c.x][c.y] = 1;
    if(a[c.x][c.y] == 'S') return true;
    for(int i = 0; i < 4; i++)
    {
        cell nb = c + dir[i];
        if(nb.is_valid() && !used[nb.x][nb.y] && a[nb.x][nb.y] != 'D')
        {
            if(DFS(nb)) return true;
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == 'W')
            {
                for(int k = 0; k < 4; k++)
                {
                    cell c(i + dir[k].x, j + dir[k].y);
                    if(c.is_valid() && a[c.x][c.y] == '.') a[c.x][c.y] = 'D';
                }
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == 'W' && !used[i][j])
            {
                if(DFS(cell(i,j)))
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
    for(int i = 1; i <= n; i++, cout << endl)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << a[i][j];
        }
    }

    return 0;
}
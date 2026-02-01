#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool used[100069];

int main()
{
    int T, n, m;
    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        memset(used, 0, sizeof used);
        for(int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            used[b] = true;
        }

        for(int i = 1; i <= n; i++)
        {
            if(!used[i])
            {
                for(int j = 1; j <= n; j++)
                {
                    if(i != j) cout << i << ' ' << j << endl;
                }

                break;
            }
        }
    }

    return 0;
}

/*
2
7 4
1 2 3
3 4 5
5 6 7
6 5 4
5 3
1 2 3
2 3 4
3 4 5
*/
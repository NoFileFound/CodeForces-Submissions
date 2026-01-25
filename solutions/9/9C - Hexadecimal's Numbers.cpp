#include <bits/stdc++.h>
using namespace std;

int BFS(int n)
{
    int ans = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int w = q.front();
        q.pop();
        if(w <= n)
        {
            ans++;
            if(w * 10 <= n)
                q.push(w * 10);

            if(w * 10 + 1 <= n)
                q.push(w * 10 + 1);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << BFS(n) << endl;
    return 0;
}
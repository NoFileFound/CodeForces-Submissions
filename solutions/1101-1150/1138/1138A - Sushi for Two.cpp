#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100069];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cur = 1, prev = 0, ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i - 1]) cur++;
        else
        {
            ans = max(ans, min(cur, prev));
            prev = cur;
            cur = 1;
        }
    }

    cout << max(ans, min(cur, prev)) * 2 << endl;
    return 0;
}
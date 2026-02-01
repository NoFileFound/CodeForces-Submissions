#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[60], m, b[60];
    map<int, int> cnt;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;
    for(int i = 1; i <= m; i++)
        cin >> b[i];

    for(int j = 1; j <= m; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(b[j] % a[i] == 0) cnt[b[j] / a[i]]++;
        }
    }

    cout << cnt[max_element(cnt.begin(), cnt.end())->first] << endl;
    return 0;
}
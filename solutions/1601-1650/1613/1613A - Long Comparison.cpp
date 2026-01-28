#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int cmp(string a, int n, string b, int m)
{
    int sza = a.size() + n, szb = b.size() + m, i = 0, j = 0;
    if(sza > szb) return 1;
    if(sza < szb) return -1;
    while(i < a.size() || j < b.size())
    {
        char ac = (i < a.size() ? a[i++] : '0');
        char bc = (j < b.size() ? b[j++] : '0');
        if(ac > bc) return 1;
        if(ac < bc) return -1;
    }

    return 0;
}

int main()
{
    string s1, s2;
    int T, n, m;
    cin >> T;
    while(T--)
    {
        cin >> s1 >> n >> s2 >> m;
        int res = cmp(s1, n, s2, m);
        cout << (res == 0 ? '=' : res == 1 ? '>' : '<') << endl;
    }

    return 0;
}
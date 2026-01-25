#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct info
{
    int diff, idx;
    info() {};
    info(int _diff, int _idx)
    {
        diff = _diff;
        idx = _idx;
    }
    bool operator < (const info& _info) const
    {
        return diff > _info.diff;
    }
};

long long a[50000], b[50000], current = 0, ans = 0;
string s;
priority_queue<info> pq;

int main()
{
    cin >> s;
    int m = count(s.begin(), s.end(), '?');
    for(int i = 0; i < m; i++)
        cin >> a[i] >> b[i];

    for(int i = 0, k = 0; i < s.size(); i++)
    {
        if(s[i] == '(') current++;
        else if(s[i] == ')') current--;
        else
        {
            s[i] = ')';
            ans += b[k];
            pq.push(info(a[k] - b[k], i));
            current--;
            k++;
        }

        while(current < 0)
        {
            if(pq.empty())
            {
                cout << -1 << endl;
                return 0;
            }

            info top = pq.top();
            pq.pop();

            ans += top.diff;
            current += 2;
            s[top.idx] = '(';
        }
    }

    if(current != 0) cout << -1 << endl;
    else cout << ans << endl << s << endl;

    return 0;
}

/*
((?(?)
1 4
2 7
*/
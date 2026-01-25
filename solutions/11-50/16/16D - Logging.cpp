#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int convert(string s)
{
    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    int mm = (s[3] - '0') * 10 + (s[4] - '0');
    bool is_am = (s[6] == 'a' && s[8] == 'm');
    if(is_am)
    {
        if(hh == 12) hh = 0;
    }
    else
    {
        if(hh != 12) hh += 12;
    }

    return hh * 60 + mm;
}

int main()
{
    int n, ans = 1, m = 0, last = -1;
    cin >> n;
    string s;

    getline(cin, s);
    last = convert(s.substr(s.find('[') + 1, s.find(']') - s.find('[') - 1));
    while(getline(cin, s))
    {
        int cur = convert(s.substr(s.find('[') + 1, s.find(']') - s.find('[') - 1));
        if(cur < last)
        {
            ans++;
            m = 1;
        }
        else if(cur == last)
        {
            m++;
            if(m > 10)
            {
                ans++;
                m = 1;
            }
        }
        else m = 1;
        last = cur;
    }

    cout << ans << endl;
    return 0;
}

/*
5
[05:00 a.m.]: Server is started
[05:00 a.m.]: Rescan initialized
[01:13 p.m.]: Request processed
[01:10 p.m.]: Request processed
[11:40 p.m.]: Rescan completed

3
[09:00 a.m.]: User logged in
[08:00 a.m.]: User logged in
[07:00 a.m.]: User logged in
*/
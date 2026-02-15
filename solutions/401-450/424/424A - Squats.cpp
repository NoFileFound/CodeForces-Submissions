#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string result(string s, int j, bool flip)
{
    string ans = s;
    for(int i = 0; i < s.size() && j > 0; i++)
    {
        if(ans[i] == (flip ? 'x' : 'X'))
        {
            ans[i] = (flip ? 'X' : 'x');
            j--;
        }
    }

    return ans;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cntX = count(s.begin(), s.end(), 'X');
    int part = n / 2;
    cout << abs(cntX - part) << endl << (cntX > part ? result(s, cntX - part,  false) : result(s, part - cntX,  true)) << endl;
    return 0;
}
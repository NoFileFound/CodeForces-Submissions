#include <bits/stdc++.h>
#define endl '\n'
#define SZ(x) (int)(x.size())
using namespace std;

void print_begin_or_end(int n)
{
    for(int i = 0; i < n; i++)
        cout << '*';
    cout << endl;
}

int main()
{
    string line;
    vector<string> lines;
    int mxsz = 0;
    while(getline(cin, line))
    {
        mxsz = max(mxsz, SZ(line));
        lines.push_back(line);
    }

    mxsz += 2;
    print_begin_or_end(mxsz);
    bool addleft = false;
    for(int i = 0; i < SZ(lines); i++)
    {
        cout << '*';
        int ans = mxsz - SZ(lines[i]) - 2;
        int _right = ans / 2;
        int _left = ans / 2;
        if(ans % 2)
        {
            if(addleft) _left++;
            else _right++;

            addleft = !addleft;
        }

        for(int i = 0; i < _left; i++)
            cout << ' ';

        for(int j = 0; j < SZ(lines[i]); j++)
        {
            cout << lines[i][j];
        }

        for(int i = 0; i < _right; i++)
            cout << ' ';

        cout << '*' << endl;
    }
    print_begin_or_end(mxsz);
    return 0;
}

/*
This  is

Codeforces
Beta
Round
5
*/
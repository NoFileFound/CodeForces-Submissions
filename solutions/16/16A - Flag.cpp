#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
string s;

int main()
{
    cin >> n >> m;
    string line, prev_line="#";
    int j = 0;
    while(getline(cin, line) && j < m)
    {
        if(line.empty()) continue;

        if(prev_line == line)
        {
            cout << "NO" << endl;
            return 0;
        }

        for(int i = 0; i < line.size() - 1; i++)
        {
            if(line[i] != line[i + 1])
            {
                cout << "NO" << endl;
                return 0;
            }
        }

        prev_line = line;
        j++;
    }

    cout << "YES" << endl;
    return 0;
}

/*
3 3
000
111
222
*/
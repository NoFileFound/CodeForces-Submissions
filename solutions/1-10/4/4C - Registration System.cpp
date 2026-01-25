#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

unordered_map<string, int> ump;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(ump.find(s) == ump.end())
        {
            ump[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            ump[s]++;
            cout << s + to_string(ump[s]) << endl;
        }
    }
	
    return 0;
}

/*
6
first
first
second
second
third
third
*/
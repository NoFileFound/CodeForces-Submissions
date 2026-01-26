#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        bool flag = false;
        string s;
        cin >> s;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                swap(s[i], s[i + 1]);
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES\n" + s : "NO") << endl;
    }
	
    return 0;
}
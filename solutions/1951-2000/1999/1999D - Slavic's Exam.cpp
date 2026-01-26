#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string s1, s2;
    cin >> T;
    while(T--)
    {
        cin >> s1 >> s2;
        int j = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(j < s2.size())
            {
                if(s1[i] == s2[j]) j++;
                else if(s1[i] == '?')
                {
                    s1[i] = s2[j];
                    j++;
                }
            }
        }

        if(j < s2.size())
        {
            cout << "NO" << endl;
            continue;
        }

        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '?') s1[i] = 'a';
        }

        cout << "YES" << endl << s1 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_vowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u';
}

int main()
{
    string s;
    cin >> s;
    if(s.size() == 1 && !is_vowel(s[0]) && s[0] != 'n')
    {
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < s.size(); i++)
    {
        if(!is_vowel(s[i]) && s[i] != 'n')
        {
            if(i + 1 >= s.size() || !is_vowel(s[i + 1]))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
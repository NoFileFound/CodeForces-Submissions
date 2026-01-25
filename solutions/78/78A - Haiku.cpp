#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int get_syllable(string s)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') cnt++;
    }

    return cnt;
}

int main()
{
    string line;
    getline(cin, line);
    if(get_syllable(line) != 5)
    {
        cout << "NO" << endl;
        return 0;
    }
	
    getline(cin, line);
    if(get_syllable(line) != 7)
    {
        cout << "NO" << endl;
        return 0;
    }
	
    getline(cin, line);
    if(get_syllable(line) != 5)
    {
        cout << "NO" << endl;
        return 0;
    }
	
    cout << "YES" << endl;
    return 0;
}

/*
on  codeforces
beta round is running
   a rustling of keys
*/
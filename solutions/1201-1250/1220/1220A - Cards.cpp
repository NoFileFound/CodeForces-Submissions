#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string s;
    deque<int> de;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'n') de.push_front(1);
        else if(s[i] == 'z') de.push_back(0);
    }

    for(auto &el : de)
        cout << el << ' ';
	
    return 0;
}
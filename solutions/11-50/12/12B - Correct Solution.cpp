#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main()
{
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end(), less<char>()); // reverse(a.begin(), a.end());
    if(a[0] == '0')
    {
        int pos = a.find_last_of('0');
        if(pos + 1 < a.size()) swap(a[0], a[pos + 1]);
    }
    
    cout << (a == b ? "OK" : "WRONG_ANSWER") << endl;
    return 0;
}
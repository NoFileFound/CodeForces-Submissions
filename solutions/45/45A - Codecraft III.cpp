#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    vector<string> mo = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int k;
    cin >> s >> k;
    cout << mo[(find(mo.begin(), mo.end(), s) - mo.begin() + k) % 12] << endl;
    return 0;
}
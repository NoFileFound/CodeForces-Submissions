#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string s;
bool lowFound, upperFound, digitFound;

int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(islower(s[i])) lowFound = true;
        else if(isupper(s[i])) upperFound = true;
        else if(isdigit(s[i])) digitFound = true;
    }

    cout << (s.size() >= 5 && lowFound && upperFound && digitFound ? "Correct" : "Too weak") << endl;
    return 0;
}
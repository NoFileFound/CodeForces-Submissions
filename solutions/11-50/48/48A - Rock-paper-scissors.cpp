#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool win(string a, string b)
{
    if(a == "rock" && b == "scissors") return true;
    if(a == "scissors" && b == "paper") return true;
    if(a == "paper" && b == "rock") return true;
    return false;
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    cout << ((win(a, b) && win(a, c)) ? 'F' : (win(b, a) && win(b, c)) ? 'M' : (win(c, a) && win(c, b)) ? 'S' : '?') << endl;
    return 0;
}
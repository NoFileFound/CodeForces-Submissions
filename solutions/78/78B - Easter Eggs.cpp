#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

string colors[7] = {"", "G", "GB", "YGB", "YGBI", "OYGBI", "GROYGB"};

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n / 7; i++)
        cout << "ROYGBIV";

    cout << colors[n % 7] << endl;
    return 0;
}

/// R O Y G R B I V
/// R O Y G B I V G
/// R O Y G B I V R
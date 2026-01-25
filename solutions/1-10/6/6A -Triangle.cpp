#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool istriangle(int a, int b, int c, int d)
{
    if(a + b > c && a + c > b && b + c > a) return true;
    if(a + b > d && a + d > b && b + d > a) return true;
    if(a + c > d && a + d > c && c + d > a) return true;
    if(b + c > d && b + d > c && c + d > b) return true;
    return false;
}

bool issegment(int a, int b, int c, int d)
{
    if(a + b == c || a + c == b || b + c == a) return true;
    if(a + b == d || a + d == b || b + d == a) return true;
    if(a + c == d || a + d == c || c + d == a) return true;
    if(b + c == d || b + d == c || c + d == b) return true;
    return false;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(istriangle(a, b, c, d))
        cout << "TRIANGLE" << endl;
    else if(issegment(a, b, c, d))
        cout << "SEGMENT" << endl;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
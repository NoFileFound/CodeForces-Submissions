#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, m, c, cntM = 0, cntC = 0;
    cin >> T;
    while(T--)
    {
        cin >> m >> c;
        if(m > c) cntM++;
        else if(m == c)
        {
            cntM--;
            cntC--;
        }
        else cntC++;
    }

    cout << (cntM > cntC ? "Mishka" : cntM == cntC ? "Friendship is magic!^^" : "Chris") << endl;
    return 0;
}
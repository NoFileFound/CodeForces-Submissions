#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    getline(cin, s, '\0');

    int qCW = count(s.begin(), s.end(), 'Q') * 9;
    int qCB = count(s.begin(), s.end(), 'q') * 9;
    int qRW = count(s.begin(), s.end(), 'R') * 5;
    int qRB = count(s.begin(), s.end(), 'r') * 5;
    int qBW = count(s.begin(), s.end(), 'B') * 3;
    int qBB = count(s.begin(), s.end(), 'b') * 3;
    int qNW = count(s.begin(), s.end(), 'N') * 3;
    int qNB = count(s.begin(), s.end(), 'n') * 3;
    int qPW = count(s.begin(), s.end(), 'P');
    int qPB = count(s.begin(), s.end(), 'p');
    if(qCW + qRW + qBW + qNW + qPW == qCB + qRB + qBB + qNB + qPB)
    {
        cout << "Draw" << endl;
        return 0;
    }

    cout << (qCW + qRW + qBW + qNW + qPW > qCB + qRB + qBB + qNB + qPB ? "White" : "Black") << endl;
    return 0;
}
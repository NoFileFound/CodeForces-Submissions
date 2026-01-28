#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
	
    int idx;
    in >> idx;
    for(int i = 0; i < 3; i++)
    {
        int x, y;
        in >> x >> y;
        if(x == idx) idx = y;
        else if(y == idx) idx = x;
    }

    out << idx << endl;
    return 0;
}
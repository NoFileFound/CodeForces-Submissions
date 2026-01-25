#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_rc4format(string s)
{
    if(s[0] != 'R') return false;
    int cPos = s.find('C');
    if(cPos == -1) return false;

    for(int i = 1; i < cPos; i++)
        if(isdigit(s[i])) return true;

    return false;
}

tuple<int, int, bool> find_coords(string s)
{
    tuple<int, int, bool> ans;
    if(is_rc4format(s))
    {
        int num = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i])) num = num * 10 + (s[i] - '0');
            else
            {
                if(num > 0)
                {
                    get<0>(ans) = num;
                    num = 0;
                }

            }
        }

        get<1>(ans) = num;
        get<2>(ans) = true;
    }
    else
    {
        int num = 0, j = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                j = i;
                break;
            }

            num = num * 26 + (s[i] - 'A' + 1);
        }

        get<0>(ans) = num;
        num = 0;
        for(int i = j; i < s.size(); i++)
            num = num * 10 + (s[i] - '0');

        get<1>(ans) = num;
        get<2>(ans) = false;
    }

    return ans;
}

string solve(tuple<int, int, bool> coords)
{
    if(get<2>(coords) == true)
    {
        int colnum = get<1>(coords);
        string column;
        while(colnum > 0)
        {
            colnum--;
            column = char('A' + (colnum % 26)) + column;

            colnum /= 26;
        }

        return column + to_string(get<0>(coords));
    }
    else
    {
        return "R" + to_string(get<1>(coords)) + "C" + to_string(get<0>(coords));
    }

    return to_string(get<1>(coords)) + "_" + to_string(get<2>(coords)) + "_" + to_string(get<2>(coords));
}


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        cout << solve(find_coords(s)) << endl;
    }
	
	return 0;
}

/*
2
R23C55
BC23
*/
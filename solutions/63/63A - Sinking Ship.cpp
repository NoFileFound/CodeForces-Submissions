#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
vector<pair<string,string>> v;

int get_priority(string s)
{
    if(s == "rat") return 1;
    if(s == "child" || s == "woman") return 2;
    if(s == "man") return 3;
    return 4;
}

bool cmp(const pair<string,string> &a, const pair<string,string> &b)
{
    return get_priority(a.second) < get_priority(b.second);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    stable_sort(v.begin(), v.end(), cmp);
    for(auto &p : v)
        cout << p.first << endl;

    return 0;
}

/*
6
Jack captain
Alice woman
Charlie man
Teddy rat
Bob child
Julia woman
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int Lcount = 0, Rcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
            Lcount++;
        if (str[i] == 'R')
            Rcount++;
    }
    if (Lcount == 0 || Rcount == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == 'R' && str[i + 1] == 'L')
        {
            cout << 0 << endl;
            return;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == 'L' && str[i + 1] == 'R')
        {
            cout << (i + 1) << endl;
            return;
        }
    }
}

int main()
{
    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
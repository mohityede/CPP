#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int a = str[0] - '0';
    int b = str[2] - '0';
    cout << (a + b) << endl;
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
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << (-1) << endl;
    }
    else
    {
        cout << (n - 1) << endl;
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
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 3)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int a, b;
    if (n % 2 == 0)
    {
        a = 1;
        b = -1;
    }
    else
    {
        a = (n - 2) / 2;
        b = -(n - 2 + 1) / 2;
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << a << " ";
        }
        else
        {
            cout << b << " ";
        }
    }
    cout << endl;
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
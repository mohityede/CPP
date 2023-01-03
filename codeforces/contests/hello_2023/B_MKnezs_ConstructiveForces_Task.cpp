#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        cout << num << " ";
        num *= -1;
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
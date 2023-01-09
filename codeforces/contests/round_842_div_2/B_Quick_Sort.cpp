#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int vec[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int op = 0;

    int smallest = n + 1, smlTill = n + 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (vec[i] > smallest)
        {
            smlTill = min(vec[i], smlTill);
        }
        smallest = min(smallest, vec[i]);
    }

    if (smlTill == n + 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        op = n - smlTill + 1;
        if (op % k == 0)
            cout << (op / k) << endl;
        else
            cout << ((op / k) + 1) << endl;
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
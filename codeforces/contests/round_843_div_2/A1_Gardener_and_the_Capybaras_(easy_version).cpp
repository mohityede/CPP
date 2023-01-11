#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Hard version same solution
    string str;
    cin >> str;
    int n = str.size();
    string s1 = str.substr(0, 1);
    string s2 = str.substr(1, n - 2);
    string s3 = str.substr(n - 1, 1);
    if (n == 3 || s2[0] == 'b' || (s2[0] == 'a' && s1 == s3))
    {
        cout << s1 << " " << s2 << " " << s3 << endl;
        return;
    }
    else
    {
        s2 = str.substr(1, 1);
        s3 = str.substr(2, n - 2);
    }
    cout << s1 << " " << s2 << " " << s3 << endl;
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
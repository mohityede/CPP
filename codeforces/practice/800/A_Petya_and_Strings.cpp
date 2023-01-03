#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

    int n = str1.size();
    for (int i = 0; i < n; i++)
    {
        if (str2[i] > str1[i])
        {
            cout << "-1" << endl;
            return;
        }
        else if (str2[i] < str1[i])
        {
            cout << "1" << endl;
            return;
        }
    }
    cout << "0" << endl;
}

int main()
{
    int testCase = 1;
    // cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
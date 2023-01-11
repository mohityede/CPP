#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> bits[n];
    int kin[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        kin[i] = k;
        for (int j = 0; j < k; j++)
        {
            int p;
            cin >> p;
            bits[i].push_back(p);
            if (mp.find(p) == mp.end())
            {
                mp[p] = 1;
            }
            else
            {
                mp[p]++;
            }
        }
    }

    string ans = "No";
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < kin[i]; j++)
        {
            if (mp[bits[i][j]] == 1)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    // cout<<"Hello World";
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
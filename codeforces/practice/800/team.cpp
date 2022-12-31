#include <bits/stdc++.h>
using namespace std;

int getAns(vector<vector<int>> &vec, int &n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i][0] + vec[i][1] + vec[i][2] >= 2)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i][0];
        cin >> vec[i][1];
        cin >> vec[i][2];
    }
    cout << getAns(vec, n) << endl;
    return 0;
}
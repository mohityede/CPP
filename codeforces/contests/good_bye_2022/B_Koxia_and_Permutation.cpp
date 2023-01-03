// Solution video: https://www.youtube.com/watch?v=pZn7GZ3ag8U&ab_channel=CodingCommunity%7CNewtonSchool

#include <bits/stdc++.h>
using namespace std;

vector<int> getAns(int n, int k)
{
    vector<int> ans;
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(i);
        }
    }
    else
    {
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(n - ind);
            }
            else
            {
                ans.push_back(1 + ind);
                ind++;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec = getAns(n, k);
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
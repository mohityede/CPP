#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // cout<<"solve"<<endl;
    int n;
    cin >> n;
    int start = 1, end = n * n;
    bool isStart = true;
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (isStart)
                {
                    matrix[i][j] = start;
                    start++;
                    isStart = false;
                }
                else
                {
                    matrix[i][j] = end;
                    end--;
                    isStart = true;
                }
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (isStart)
                {
                    matrix[i][j] = start;
                    start++;
                    isStart = false;
                }
                else
                {
                    matrix[i][j] = end;
                    end--;
                    isStart = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
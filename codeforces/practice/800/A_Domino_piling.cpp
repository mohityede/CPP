#include <bits/stdc++.h>
using namespace std;

int getAns(int n, int m)
{
    return (n * m) / 2;
}
int main()
{

    int n, m;
    cin >> n >> m;

    cout << getAns(n, m) << endl;

    return 0;
}
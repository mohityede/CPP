#include <bits/stdc++.h>
#include "utils/utils.cpp"
using namespace std;

int main()
{
  int node, edges;
  cin >> node >> edges;
  vector<int> adjList[node];
  for (int i = 0; i < edges; i++)
  {
    int num1, num2;
    cin >> num1 >> num2;
    adjList[num1].push_back(num2);
    adjList[num2].push_back(num1);
  }
  printAdjucencyList(adjList, node);
  return 0;
}
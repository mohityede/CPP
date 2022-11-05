#include<bits/stdc++.h>
using namespace std;

void inputAdjucencyList(){
  // just copy code for adj input
  int node,edges;
  cin>>node>>edges;
  vector<int> ans[node];
  for(int i=0;i<edges;i++){
    int num1,num2;
    cin>>num1>>num2;
    ans[num1].push_back(num2);
    ans[num2].push_back(num1);
  }
}

void printAdjucencyList(vector<int> adj[],int nodes){
  cout<<"insidefun"<<endl;
  for(int i=0;i<nodes;i++){
    vector<int> vec=adj[i];
    cout<<i<<": ";
    for(int j=0;j<vec.size();j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }
}

vector<vector<int>> input2dVector(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> ans(n,vector<int> (m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>ans[i][j];
    }
  }
  return ans;
}

void print2dVector(vector<vector<int>> &vec){
  int n=vec.size();
  int m= vec[0].size();

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }
}
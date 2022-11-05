#include<bits/stdc++.h>
using namespace std;

// detect cycle Using BFS
bool detectCycleBFS(vector<int> adj[],int V){
  queue<pair<int,int>> q;
  int vis[V]={0};
  q.push({0,-1});
  vis[0]=1;
  while(!q.empty()){
    pair<int,int> curr = q.front();
    int currNode= curr.first;
    int parentNode= curr.second;
    q.pop();
    
    for(auto ind: adj[currNode]){
      if(vis[ind] && parentNode != ind) return true;
      if(vis[currNode]) continue;

      q.push({ind,curr.first});
      vis[ind]=1;
    }
  }
  return false;
}

// detect cycle using DFS
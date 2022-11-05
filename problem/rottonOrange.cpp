#include<bits/stdc++.h>
using namespace std;


bool isValid(vector<vector<int>> &grid,int row,int col){
  int n= grid.size();
  int m= grid[0].size();
  if(row >= 0 && row < n && col >= 0 && col < m){
    if(grid[row][col] == 1) return true;
  }
  return false;
}

int rottonOranges(vector<vector<int>> &grid){
  int n= grid.size();
  int m= grid[0].size();
  int ans=0;

  // insert all the rotton oranges in queue
  queue<vector<int>> q;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(grid[i][j] == 2){
        vector<int> vec= {i,j,0};
        q.push(vec);
      }
    }
  }
  // call bfs
  while(!q.empty()){
    vector<int> curr = q.front();
    q.pop();
    int row= curr[0];
    int col= curr[1];
    int step= curr[2];
    ans= max(ans,step);
    vector<int> delrow= {-1,1,0,0};
    vector<int> delcol= {0,0,-1,1};
    for(int k=0;k<4;k++){   
      int currRow = row+delrow[k];    
      int currCol = col+delcol[k];  
      if(isValid(grid,currRow,currCol)){
        q.push({currRow,currCol,step+1});
        grid[currRow][currCol] = 2;
      }
    }
  }
  //chack for remaing fresh oreages
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(grid[i][j] == 1){
        return -1;
      }
    }
  }
  return ans;
}
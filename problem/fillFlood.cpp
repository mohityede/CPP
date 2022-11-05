#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> &grid, int row, int col, int oldColor){
  int n=grid.size();
  int m= grid[0].size();
  if(row >= 0 && row < n && col >= 0 && col < m){
    if(grid[row][col] == oldColor) return true;
  }
  return false;
}

void dfs(vector<vector<int>> &grid, int row, int col, int newColor, int oldColor){
  grid[row][col] = newColor;

  // up
  if(isValid(grid,row-1,col,oldColor)) dfs(grid,row-1,col,newColor,oldColor);
  if(isValid(grid,row+1,col,oldColor)) dfs(grid,row+1,col,newColor,oldColor);
  if(isValid(grid,row,col-1,oldColor)) dfs(grid,row,col-1,newColor,oldColor);
  if(isValid(grid,row,col+1,oldColor)) dfs(grid,row,col+1,newColor,oldColor);
}

vector<vector<int>> fillFlood(vector<vector<int>> &grid, int sr, int sc, int newColor){
  // vector<vector<int>> ans;
  int oldColor = grid[sr][sc];
  dfs(grid,sr,sc,newColor,oldColor);
  return grid;
}
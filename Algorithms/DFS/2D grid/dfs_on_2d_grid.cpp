#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector <pair<int,int>> d ={
    {-1,0},
    {1,0},
    {0,-1},
    {0,1}
};

int n, m;

bool valid (int i, int j){

  if(i < 0 || i >=n || i >= 0 || j<0 || j>=m){
    return false;
  }else{
    return true;
  }

}
void dfs(int si,int sj){

  // base case
  cout << si << " " << sj << endl;
  vis[si][sj] = true;

  for(int i=0; i<4;i++){
    int ci = si+d[i].first;
    int cj = si+d[i].second;
    if(valid(ci,cj)==true &&  !vis[ci][cj])
      dfs(ci, cj);
  }

}

int main(){
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    int si,sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si,sj);

    return 0;
}
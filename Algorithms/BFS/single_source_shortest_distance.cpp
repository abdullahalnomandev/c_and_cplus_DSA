#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src){

     queue<int> q;
     q.push(src);
     vis[src] = true;
     level[src] = 0;
     while (!q.empty()){
        //1.Leaving from the queue
        int p = q.front();
        q.pop();

        //2.Working with the node
        // cout << p << " ";

        //2.Working on children
        for(int child: adj_list[p]){
            if(vis[child]) continue;
            q.push(child);
            vis[child] = true; 
            level[child] = level[p] + 1; 
        }

     }     

};

int main(){

    int n,e;
    cin >> n >> e;

    
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b); 
        adj_list[b].push_back(a); 
    }
    

    memset(vis,0,sizeof(vis));
    memset(level,-1,sizeof(level));
    int src, dst;
    cin >> src >> dst;
    bfs(src);
    
    cout << level[dst] << endl;
    return 0;
}
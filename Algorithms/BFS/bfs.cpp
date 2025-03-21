#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void bfs(int src){

     queue<int> q;
     q.push(src);
     vis[src] = true;

     while (!q.empty()){
        //1.Leaving from the queue
        int p = q.front();
        q.pop();

        //2.Working with the node
        cout << p << " ";

        //2.Working on children
        for(int child: adj_list[p]){
            if(vis[child]) continue; //already visited
            q.push(child);
            vis[child] = true; 
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
    bfs(0); //starting from node 1
    return 0;
}
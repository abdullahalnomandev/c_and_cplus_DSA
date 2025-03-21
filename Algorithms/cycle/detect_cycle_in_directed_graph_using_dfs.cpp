#include<bits/stdc++.h>
using namespace std;
bool vis[105];
vector<int> adj_list[105];
bool pathvis [105];
bool cycle;
int main() {

    int n, e;
    cin >> n >> e;


    void bfs(int src){
        queue<int> q;
        q.push(src);
        vis[src] = true;
        if(vis[child] && pathvis[child])
         cycle = true;
        while (!q.empty()){
            int par = q.front();
            q.pop();
            for(int child: adj_list[par]){
                if(vis[child] && parent[par] != child){
                    cycle = true;
                }
                if(!vis[child]){
                    q.push(child);
                    vis[child] = true;
                    parent[child] = par;
                }
            }

        }
    }
    while (e--){
      int a, b;
      cin >> a >> b;
      adj_list[a].push_back(b);
    }

    memset(adj_list, 0, sizeof(adj_list));
    memset(pathvis, -1, sizeof(pathvis));
    cycle = false;

    for(int i = 0; i<n; i++){
        if(!vis[i])
            bfs(i);
    }

    if(cycle)
       cout << "cycle detected" << endl;
    else
        cout << "cycle not detected" << endl;
    
    return 0;
}
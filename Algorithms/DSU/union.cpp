#include <bits/stdc++.h>
using namespace std;
int par[1005];
int groupSize[1005];.

int find(int node){
    
    while (par[node] !=-1)
    {
        node = par[node];
    }
    return node;

};

void dsu_union(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(groupSize[leder1] > groupSize[leader2]){
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }else{
        par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
};
int main()
{

    memset(par, -1, sizeof(par));
    memset(par[0], 1, sizeof(groupSize));
    dsu_union(1,2);

   for (int i = 0; i < 6; i++)
   {
    cout << " "
   }
   

    return 0;
}
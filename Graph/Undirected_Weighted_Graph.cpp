// UnDirected Weighted Graph
#include <bits/stdc++.h>
using namespace std;
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        AdjMat[u][v] = w;
        AdjMat[v][u] = w;

    }
    // printing the graph
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<'\n';
    }

}
// T.C --> O(v2)
// S.C --> O(v2)

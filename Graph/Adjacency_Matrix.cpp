//Unweighted 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    /*
    The loop for getting u-->v will depend on edges.
    why?
    -> edges denotes who is connected to whom in how many ways.

    */
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;

    }
    /*
    printing the graph represtentation
    the loop will depend on vertex. why?
    to show which vertex/node is connected to whom
    */
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<'\n';
    }
}
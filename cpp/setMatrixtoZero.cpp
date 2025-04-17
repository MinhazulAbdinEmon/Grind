#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix,int m, int n,int i){
    for(int j=0;j<n;j++){
        if( matrix[i][j] !=0){
            matrix[i][j] = -1;
        }    
    }
}
void markCol(vector<vector<int>>& matrix,int m, int n,int j){
    for(int i=0;i<m;i++){
        if( matrix[i][j] !=0){
            matrix[i][j] = -1;
        }    
    }
}

vector<vector<int>> setMatrixZero(vector<vector<int>>&matrix,int m, int n){

    for(int i =0; i<m;i++){
        for(int j =0;j<n;j++){
            if(matrix[i][j] == 0){
                markRow(matrix,m,n,i);
                markCol(matrix,m,n,j);
            }
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == -1){
                matrix[i][j] =0;
            }
        }
    }
    return matrix;




}

int main(){
    vector<vector<int>> matrix = {

        {1,1,1,1},
        {1,0,1,1},
        {1,1,0,1},
        {1,0,0,1}
    };
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> ans = setMatrixZero(matrix,m,n);
    for(auto& it : ans){
        for(auto& elem : it){
            cout<<elem<<" ";
        }
        cout<<"\n";
    }
    return 0;



}
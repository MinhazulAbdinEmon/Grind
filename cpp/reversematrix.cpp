#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3] = { {11,22,33},
                      {44,55,66},
                      {77,88,99}

    };
    int row = 3, col=3, new_arr[3][3];
    for( int i =0; i<row;i++){
        for( int j=0; j<col;j++){
            new_arr[i][j] = arr[i][col-1-j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< new_arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    // for(const auto& n: new_arr){
    //     for(const auto& elem: n ){
    //         cout<<elem<<" ";
    //     }
    // }
    return 0;
}
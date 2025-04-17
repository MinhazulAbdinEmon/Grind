#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3] = { {11,22,33},
                      {44,55,66},
                      {77,88,99}

    };
    int row = 3, col=3; 
    int new_arr[row*col];
    int count =0;
    for( int i =0; i<row;i++){
        for( int j=0; j<col;j++){
            if(i%2 ==0){
                new_arr[count] = arr[j] [i];
                count++;
            }
            else if(i%2 !=0){
                new_arr[count] = arr[col-1-j] [i];
                count++;
            }
        }
    }
    int n = sizeof(new_arr)/sizeof(new_arr[0]);
    for( int i=0;i<n;i++){
        cout<<new_arr[i]<<" ";
    }
    return 0;
}

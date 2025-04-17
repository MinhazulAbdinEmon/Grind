#include <bits/stdc++.h>
using namespace std;

#define bl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back

#define mat(n,m,val) vector<vector<int>>(n,vector<int>(m,val))

#ifndef ONLINE_JUDGE
    #define ryoikiTenkai() freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout); ios::sync_with_stdio(false); cin.tie(nullptr);
#else
    #define ryoikiTenkai() ios::sync_with_stdio(false); cin.tie(nullptr);
#endif

template <typename T>
void print1D(const vector<T>& arr){
    for(const auto& elem: arr){
        cout<<elem<<" ";
    }
    cout<<bl;

}

template<typename T>
void print2D(const vector<vector<T>>& mat){
    for(const auto& row: mat){
        for(const auto& elem: row){
            cout<<elem<<" ";
        }
        cout<<bl;
    }
}

template <typename T>
vector<T> kuchiyose1Djutsu(int size){
    vector<T>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    return arr;
}

template <typename T>
vector<vector<T>> kuchiyose2Djutsu(int n,int m){

    auto grid = mat(n,m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> grid[i][j];
        }
    }
    return grid;
}

//void ryoikiTenkai(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//      cout.tie(nullptr);
//}

int main(){
    ryoikiTenkai();
    int t;
    cin>>t;
    while(t--){
        

    }
}


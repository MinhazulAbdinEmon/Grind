#include <bits/stdc++.h>
using namespace std;
 
#define bl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
 
 
 
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
vector<vector<T>> make2D(int n,int m, T val){
    return vector<vector<T>>(n,vector<T>(m,val));
}
template <typename T>
vector<T> summon1D(int size){
    vector<T>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    return arr;
}
 
template <typename T>
vector<vector<T>> summon2D(int n,int m){
 
    auto grid = make2D(n,m,T());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> grid[i][j];
        }
    }
    return grid;
}
 
// void ryoikiTenkai(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//      cout.tie(nullptr);
// }
 
int main(){
    ryoikiTenkai();
    cout << "Output working check" << bl;

    int n;
    cin>>n;
    auto arr =summon1D<int>(n);
    ll s=0,d=0;
    int sz = arr.size()-1;
    while(!arr.empty()){
        
        int maxi = max(arr[0],arr[sz]);
        s+= maxi;
        auto it = find(arr.begin(),arr.end(),maxi);
        if(it != arr.end()){
            arr.erase(it);
            sz--;
        }
        if(!arr.empty()){
            int maxi2 =max(arr[0],arr[sz]); 
            d+= maxi2;
            auto it2 = find(arr.begin(),arr.end(),maxi2);
            if(it2 != arr.end()){
                arr.erase(it2);
                sz--;
            }
        }
    }
    cout<<s<<" "<<d<<bl;
    
}
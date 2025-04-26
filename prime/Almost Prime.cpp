// Problem link : https://codeforces.com/problemset/problem/26/A
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

//void ryoikiTenkai(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//      cout.tie(nullptr);
//}
bool pow_of_two(ll a){

    if(a==0)return 0;
    else if((a&(a-1))==0){ // all zeros(00000...0)
        return 1;
    }
    return 0;

}
bool is_prime(int i){
    int cnt=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            cnt++;
        }
    }
    if(cnt == 2)return 1;
    return 0;
}
bool almost_prime(int a){
    int cnt=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            if(is_prime(i)){
                cnt++;
            }
        }    
    }
    if(cnt ==2)return 1;
    return 0;
}
int main(){
    ryoikiTenkai();
    int n; cin>>n;
    int cnt=0;
    for( int i=2;i<=n;i++){
        if(almost_prime(i)){
            cnt++;
        }

    }
    cout<<cnt<<bl;

    
}

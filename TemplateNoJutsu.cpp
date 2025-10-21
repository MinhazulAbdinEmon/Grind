#include <bits/stdc++.h>
using namespace std;

#define bl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
#define mod 1000000007

#ifndef ONLINE_JUDGE
#define ryoikiTenkai() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); ios::sync_with_stdio(false); cin.tie(nullptr);
#else
#define ryoikiTenkai() ios::sync_with_stdio(false); cin.tie(nullptr);
#endif

template <typename T>
void print1D(const vector<T>& arr) {
    for (const auto& elem : arr) cout << elem << " ";
    cout << bl;
}

template<typename T>
void print2D(const vector<vector<T>>& mat) {
    for (const auto& row : mat) print1D(row);
}

template <typename T>
vector<vector<T>> make2D(int n,int m, T val){
    return vector<vector<T>>(n,vector<T>(m,val));
}

template <typename T>
vector<T> summon1D(int size){
    vector<T>arr(size);
    for(int i=0;i<size;i++) cin>>arr[i];
    return arr;
}

template <typename T>
vector<vector<T>> summon2D(int n,int m){
    auto grid = make2D(n,m,T());
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>> grid[i][j];
    return grid;
}

void teleport(int &a, int &b){
    if(a!=b){
        a = a^b; b = a^b; a = a^b;
    }
}

bool pow_of_two(ll a){
    if(a<=0){
        return 0;
    }
    else if((a&(a-1))==0){
        return 1;
    }
    return 0;
    
}
int cntBits(ll x){
    int cnt=0;
    while(x){
        x = x&(x-1);
        cnt++;
    }
    return cnt;
}

ll intPow(ll a, ll b) {
    ll res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) {
            res = (res*a)%mod;
        }    
        a = (a*a)%mod;               
        b >>= 1;              
    }
    return res;
}


void solve(){
     
    

    
}

int main(){
    ryoikiTenkai();
    int t =1;
    // cin>>t;
    while(t--){
        solve();
    }
} 




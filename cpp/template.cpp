#include <bits/stdc++.h>
using namespace std;

#define bl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<long long>;
#define pb push_back
#define absoluteSum(a,b) abs((a)+(b))
#define mat(n,m,val) vector<vector<int>>(n,vector<int>(m,val))

template<typename T>
void print2D(const vector<vector<T>>& mat){
    for(const auto& row: mat){
        for(const auto& elem: row){
            cout<<elem<<" ";
        }
        cout<<bl;
    }
}
void ryoikiTenkai(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout.tie(nullptr);
}
int main(){
    ryoikiTenkai();
    int t;
    cin>>t;
    int count =0;
    for(int i=0;i<=t;i++){
        if((i&1) == 0){
            count++;
        }
    }
    cout<<count<<bl;
}

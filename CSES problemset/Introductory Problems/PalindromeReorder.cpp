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
vector<vector<T>> make2D(int n,int m,T val){
    return vector<vector<T>>(n, vector<T>(m,val));
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
 
int main(){
    ryoikiTenkai();
    string s;
    cin>>s;
    int n=s.size();
    vi ans(26,0);
    vector<char>res(n);
    for(int i=0;i<s.size();i++){
        ans[s[i]-'A']++;
    }
    int start =0,end=n-1;
    int minimum_odd =0;
    string dummy;
    bool no_sol =0;
    for(int i=0;i<26;i++){
        while(ans[i]){
            if((ans[i]&1)==0){
                res[start]='A'+i;
                res[end] = 'A'+i;
                ans[i] -=2;
                start++,end--;
            }
            else{
                minimum_odd += 1;
                if(minimum_odd ==1){
                    while(ans[i]){
                        char c = 'A'+i;
                        dummy += c;
                        ans[i]--;
                    }
                }
                else{
                    no_sol =1;
                    goto end;
                }
            }
        }
    }
    end:
    if(no_sol==1){
        cout<<"NO SOLUTION"<<bl;
        return 0;
    }
    int index =0;
    while(start<=end && index<dummy.size()){
        char c = dummy[index];
        res[start]=c;
        start++;
        index++;
    }
    for(auto c : res){
        cout<<c;
    }
    
    
}
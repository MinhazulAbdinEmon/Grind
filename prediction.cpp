#include <bits/stdc++.h>
#define bl '\n'

#define ll long long
#define pb push_back
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>ans;
    vector<int>res;
    for(int i=0;i<t;i++){
        int dummy;
        cin>>dummy;
        ans.pb(dummy);
    }
    // making the sequence
    int x = ans[0];
    cout<<x;
    for(int i=1;i<ans.size();i++){
        while(x<ans[i]) cout<<" "<<++x;
        while(x>ans[i]) cout<<" "<<--x;
    }
    cout<<bl;
    
     

    
}

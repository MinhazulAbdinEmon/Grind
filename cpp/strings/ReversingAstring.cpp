#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ="Emon";
    int st=0,e=s.size()-1;
    while(st < e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    cout<<s;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    cout<<s<<'\n';
    // here the size of string is always dynamic like vector!


    // but a cruicial problem is when i give input as "hello world"

    // it will only print "hello" but why is that????
    // -> the problem is because of cin,
    // when we use cin it ignores "Enter","Tab" & "Space"!

    // so to solve this problem we use getline() function
    // getline(cin,s);  --> only valid for "Space" & "Tab"

    string q;
    getline(cin,q);
    cout<<q<<'\n';
}
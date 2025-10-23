#include <bits/stdc++.h>
using namespace std;

int main(){
    // suppose i need to print "Emon is a "good" boy"

    // if i use the basic method it will give me error 
    // in order to fix this we use ESCAPE keyword '\'
    // which tells no need to print me just print the next word after me

    string s;
    s= "Emon is a \"good\" boy";
    cout<<s<<endl;
    string s2 = "\\";
    cout<<s2;
}
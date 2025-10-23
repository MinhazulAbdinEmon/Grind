#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[4]={'E','M','O','N'};

    for(int i=0;i<4;i++){
        cout<<c[i]<<" ";
    }
}
// The problem here is always the size has to be fixed

// TO  tackle the problem we assume a very high size like

char c[10000];

// but what if the input is "MEN" only takes 3bytes but the size is 10^4 all 
// the remaining spaces are getting wasted.

// For this we felt the need to invent strings!!!!!!
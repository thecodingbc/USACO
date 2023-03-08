#include <iostream>
#include "bits/stdc++.h"
using namespace std;
// reading files
void setIo(string s){
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("lostcow");
    cin>>x>>y; //2 in put from the files
    y -= x;
    d = abs(y);
    n = ceil(log(d)/log(2)); // distance between bessie and farmer john
    // can be inversed (smth like UNO reverse!)
    n+=(n+ (y<0)%2;) // al possible wats farmer john can take to find bessie
    // "%2" is to calculte distance between farmer john and bessie
    count<<2*(pow(2,n)-1)+d;
}

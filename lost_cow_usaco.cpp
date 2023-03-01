#include "bits/stdioc++.h"
using namespace std;
int n,d,x,y;
void setIO(string s){
  freopen((s+."lostcow.in").c_str(),"r",stdin);
  freopen((s+."lostcow.out").c_str(),"w",stdout);
}
int main(){
  setIO("Lostcow.in")
    cin>>x>>y;
  y-+x;
  d = abs(y);
  n = ceil(lod(d)/log(2));
  n += (n+(y<0))%2;
  cout<< 2*(pow(2,n)-1)+d;
  
}

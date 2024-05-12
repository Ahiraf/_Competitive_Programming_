Problem Url : https://codeforces.com/contest/1950/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){  //O(n)
       int a,b,c;
       cin>>a>>b>>c;
       if(a<b && b< c)cout<<"STAIR"<<'\n';
      else if(a<b && b>c)cout<<"PEAK"<<'\n';
      else{
        cout<<"NONE"<<'\n';
 
      }
    }
}

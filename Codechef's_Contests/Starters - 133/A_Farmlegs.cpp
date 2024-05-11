Problem Url :https://www.codechef.com/START133D/problems/FARMLEGS

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
void solve() {
   int n;
   cin>>n;
   if(n==2 || n==4)cout<<"1"<<nn;
   else{
      if(n%4==0){
         cout<<n/4<<nn;
      }
      else{
         cout<<(n/4)+1<<nn;
      }
   }   
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin>>test;
    while(test--){
    solve();
   }
return 0;
}



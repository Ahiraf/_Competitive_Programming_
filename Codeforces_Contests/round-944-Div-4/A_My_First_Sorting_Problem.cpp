#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
void solve() {
  int x,y;
  cin>>x>>y;
  cout<<min(x,y)<<" "<<max(x,y)<<nn;
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

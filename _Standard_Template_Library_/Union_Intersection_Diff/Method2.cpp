/* Given two sets , A and B. Find Union,intersection,Difference(A-B) between A and B.
    n => size of A
    m => size of B      */

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define int long long
#define ld long double
long double PI=acos(-1);

void solve() {
  int n,m,i,j;
  cin>>n>>m;
  vector<int>v1(n),v2(m);
  map<int,int>mp;
  for(i=0;i<n;i++){
    cin>>v1[i];
    mp[v1[i]]+=1;//giving weightage as +1 to all the elements of set A
  }
  for(j=0;j<m;j++){
    cin>>v2[j];
    mp[v2[j]]+=2;//giving weightage as +2 to all the elements of set B
  }
  for(auto it:mp) cout<<it.first<<" "; //to print the union 
  cout<<"\n";
  for(auto it:mp){
    if(it.second==3){
      cout<<it.first<<" "; // to print the intersection
    }
  }
  cout<<"\n";
  for(auto it:mp){
    if(it.second==1){
      cout<<it.first<<" " ; //to print the difference (A-B)
    }
  }
  cout<<"\n";

}                                                              
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int test; cin>>test; while(test--)
    solve(); 
return 0;
}

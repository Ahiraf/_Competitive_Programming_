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
  set<int>s,s1,s2;
  // s will store the elements of union
  // s1 will store the elements of intersection
  // s2 will store the elements of difference between A and B (A-B)
  for(i=0;i<n;i++){
    cin>>v1[i];
    s.insert(v1[i]);
    s2.insert(v1[i]);
  }
  for(j=0;j<m;j++){
    cin>>v2[j];
   if(s.find(v2[j]) != s.end()){
      s1.insert(v2[j]); // Intersection
      s2.erase(v2[j]);//Difference
   }
   s.insert(v2[j]);//Union
  }
 for(auto it=s.begin();it != s.end();it++){
  cout<<*it<<" ";
 }
 cout<<"\n";
 for(auto it=s1.begin();it != s1.end();it++){
  cout<<*it<<" ";
 }
 cout<<"\n";
 for(auto it=s2.begin();it != s2.end();it++){
  cout<<*it<<" ";
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

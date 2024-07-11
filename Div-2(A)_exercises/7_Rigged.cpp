//Problem Url: https://codeforces.com/problemset/problem/1879/A
/* Learnings : 
          At first I forgot that there can be multiple answers. So for the first given test case I forgot the output also can be 7 , though
          it is given as 5. But after understanding the editorial I found out my mistake !  */



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn "\n"
#define pb push_back
 
void solve()
{
  
 int n;
 cin>>n;
 int s[n],e[n];
 for(int i=0;i<n;i++){
  cin>>s[i]>>e[i];
 }
 bool ok=true;
 for(int i=1;i<n;i++){
  if(s[i]>=s[0] && e[i]>=e[0]){
    ok=false;
  }
 }
 if(!ok)cout<<"-1"<<nn;
 else{
  cout<<s[0]<<nn;
 }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--) 
        solve();
    return 0;
}

//Problem Url : https://codeforces.com/gym/104172/problem/K

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
 int n,flag=1;
 cin>>n;
 vector<int>v(n);
 for(auto &it:v)cin>>it;
 sort(v.begin(),v.end());
 for(int i=1;i<n;i++){
  if(v[0]%v[i]==0)continue;
  else {
    if(v[0]*2 <= v[i]){
  }
    else{
     flag=0;
  }
  }
 }
 if(flag)cout<<v[0]<<nn;
 else{
  cout<<v[0]/2<<nn;
 }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

// Problem Url : https://codeforces.com/contest/706/problem/B
//Learnings : As the range of n and q is very large . I cannot use two loops . so I have used upper_bound() here

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,x,sum=0,cnt=0;
  cin>>n;
  vector<int>v,v2(n);
  for(auto &it:v2)cin>>it;
  sort(v2.begin(),v2.end());
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int m;
    cin>>m;
    cout<<upper_bound(v2.begin(),v2.end(),m)-v2.begin()<<nn;
  }
  
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

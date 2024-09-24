//Problem Url: https://codeforces.com/contest/2007/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int l,r,cnt=0;
  cin>>l>>r;
  for(int i=l;i<=r;i++){
    if(i%2)cnt++;
  }
  cout<<cnt/2<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

//Problem Url :https://codeforces.com/contest/2008/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;
const int N=1e5;

void solve(){
 int n,flag=0;
  cin>>n;
  string s;
  cin>>s;
  int i=0;
 while(i<n && s[i]=='1'){
  i++;
 }//In case of While loop if the condition is false once the loop will break .
 // Afer completing the loop the final i will represent the index of first 0
 // cout<<i<<" ";
  if(i==n){
    if(n==4)cout<<"Yes\n";
    else{
      cout<<"No\n";
    }
  }
  else{
    if((i-1)*(i-1)==n)cout<<"Yes\n";
    else{
      cout<<"No\n";
    }
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
 










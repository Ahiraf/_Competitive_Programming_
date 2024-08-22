//Problem url : https://codeforces.com/contest/742/problem/A
// Learnings : A^n % M = (A % M)^n  using this characteristic of mod at first I make the whole number 8^n.

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n;
  cin>>n;
  if(n==0){
    cout<<1<<nn;
    return;
  }
  if(n%4==0)cout<<6<<nn;
  else if(n%4==1)cout<<8<<nn;
  else if(n%4==2)cout<<4<<nn;
  else{
    cout<<2<<nn;
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
 

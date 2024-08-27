//Problem Url :https://codeforces.com/contest/466/problem/A
//Learnings : my mistake was I forgot to think about different types of test cases . 

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int specialTicket=n/m,temp=0,x=0,specialRubles=specialTicket*b,rubles=b;
  if(m>=n && b<=n*a){
    cout<<b<<nn;
    return;
  }
  if(specialRubles > n*a){
    cout<<n*a<<nn;
  }
  else{
    x=specialTicket*b;
    if(specialTicket*m < n){
      temp=n-(specialTicket*m);
    }
    while(specialTicket*m < n){
      specialTicket++;
    }
    x+=temp*a;
    specialTicket*=b;
    cout<<min(x,specialTicket)<<nn;
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
 

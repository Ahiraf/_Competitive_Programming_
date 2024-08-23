//Problem url :https://codeforces.com/contest/1521/problem/A
//Learnings: In multiplication table of any number like 2, 2x4=8 , 2x5=10 or , 8+2=10. 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int a,b;
  cin>>a>>b;
  if(b==1)cout<<"NO\n";
  else{
    cout<<"YES\n"<<a<<" "<<a*b<<" "<<a*(b+1)<<nn;
  }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

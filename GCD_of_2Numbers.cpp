#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
void solve() {
    int a,b;
    cin>>a>>b;
   if(a<b)swap(a,b);
  while(b!=0){            //O(log(min(a,b)))
    int temp =b;
    b=a%b;
    a=temp;
  }
  cout<<a<<nn;    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test;
   // cin>>test;
   // while(test--){
    solve();
  // }
return 0;
}




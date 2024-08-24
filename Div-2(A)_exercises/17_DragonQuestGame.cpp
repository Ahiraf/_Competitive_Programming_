//Problem Url : https://codeforces.com/contest/1337/problem/B
//Learnings: At first I have to focus on the operation 2 . if I can make x less than or equal to 0 by only using operation 2
//           than I should only use operation 2 thus I can avoid the loop .
//           Otherwise I have to use an loop and inside the loop I also have to remember whether the x come to such a number
//           from which I can subtract 10 as operation 2 and make x less than or equal to 0.
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int x,m,n;
  cin>>x>>m>>n;
  int i=0;
  if(n*10>=x){
    cout<<"YES\n";
    return;
  }
  while(i<m){
    x=(floor(x/2))+10;
    if(x<=(n*10))break;
    i++;
  }
  if(x>(n*10))cout<<"NO\n";
  else{
    cout<<"YES\n";
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
 

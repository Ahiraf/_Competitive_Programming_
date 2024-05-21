//Given a letter X.Determine whether x is digit or Alphabet. If it is alphabet Determine whether it is capital or small letter.
/* 0 - 9 = 48 - 57
  A - Z = 65 - 90 
  a - z = 97 - 123  */

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
long double PI=acos(-1);

void solve() {
    char x;
    cin>>x;
    if(x>='0' && x<='9'){
        cout<<"Is digit"<<nn;
    }
    else{
      cout<<"Is Alpha"<<nn;
        if(x>='A' && x<='Z'){
            cout<<"Is capital"<<nn;
        }
        else{
            cout<<"Is small"<<nn;
        }
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test; cin>>test;while(test--)
    solve();
   
return 0;
}



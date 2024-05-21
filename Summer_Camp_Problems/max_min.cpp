//Given 3 numbers .print maximum and minimum of the numbers

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
long double PI=acos(-1);

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min({a,b,c})<<" "<<max({a,b,c})<<nn; //min({a,b,c}) = min(a,min(b,c))   
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test; cin>>test;while(test--)
    solve();
   
return 0;
}



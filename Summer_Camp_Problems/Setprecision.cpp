//Given a number r.Calculate the area of a circle with a radius of r.Round off the ans to 9 decimal places.



#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
long double PI=acos(-1);

void solve() {
    
    long double r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<PI*r*r<<nn;  //output :314.159265359
}                                              //if I didn't use fixed it would print 314.159265
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test; cin>>test;while(test--)
    solve();
   
return 0;
}

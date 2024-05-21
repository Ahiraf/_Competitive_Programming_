//Given 2 numbers A and B.Find the floor , ceil and round value of A/B

/*Floor : it means the greatest integer less than A/B ....like, 10/3=3.33333333 =3(floor)  ....7.5=7(floor)
  Ceil  : it means the smallest integer greater than or equals to A/B
  Round : it means the closest integer to the number .    ...   7.5=8(round) ..so if i add 1/2 or 0.5 then it will give the round   */
//1<=A,B<=10^9
//if I use buil in functions then when the value of A ,B is big then it will give error like 25/5 can give 4.99999999 rather than 5.000000000


#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
void solve() {
    int a,b;
    cin>>a>>b;
    if(b>a)swap(a,b);
    cout<<"Floor: "<<a/b<<nn;
    cout<<"Ceil: "<<(a+b-1)/b<<nn;
    cout<<"Round: "<<(2*a+b)/(2*b)<<nn;      
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test; cin>>test;while(test--)
    solve();
   
return 0;
}


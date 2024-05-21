//Given 4 numbers A,B,C,D. If A^B > C^D Print Yes .Otherwise print No.

//A^B=BlogA    and   C^D=DlogC

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);

void solve() {
    ld a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log(a)>d*log(c)){   //If I would had not used long double here then for a big value of a, b, c,d the program will give an error
        cout<<"Yes"<<nn;     // because then it will give 4.99999999 and 4.9999999998 are equal and will print No . but they are not .
    }                        //If i didn't use long double i have to add "EPS" like if(b*log(a)>d*log(c)+EPS)
    else{
        cout<<"No"<<nn;
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



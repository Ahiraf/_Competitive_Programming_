/*Problem url: https://maang.in/problems/Can-You-Make-C-66?resourceUrl=cs103-cp518-pl3503-rs66
Bezout's identity.
Bezout's identity states that for any two integers a and b, their greatest common divisor (GCD) can be expressed as the smallest positive integer that can be expressed as a linear combination of a and b, that is:
gcd(a,b)=ax+by where x and y are integers.This shows that if the GCD of A and B divides C, then there exists a solution for the equation 
Ax+By=C in integers.Conversely, if the GCD of A and B does not divide C, then there cannot be a solution for the equation Ax+By=C in integers.
Thus, by finding the GCD of A and B and checking whether it divides C, we can determine the existence of integer solutions for the equation 
Ax+By=C.*/

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);
int gcd(int a,int b){
    if(a>b)swap(a,b);
        if(a==0)return b;
        return gcd((b%a),a);
    
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%gcd(a,b)==0)cout<<"Yes"<<nn;
    else cout<<"No"<<nn;
    

}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   ll test;cin>>test;while(test--)
   solve();
return 0;
}
 
 

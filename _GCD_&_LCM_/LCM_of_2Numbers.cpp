/* Definition: The LCM of two or more integers is the smallest positive integer that is divisible by each of the integers.
   Notation: LCM(a, b)
   Properties:
     1) LCM(a, b) = (a * b) / HCF(a, b)
     2) LCM(a, b) = LCM(b, a) (commutative property)
*/

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);
 //LCM = Lowest Common Multiple
 //Using Ecludian Algorithm ...There are 2 types in this Algorithm : 1) Basic and 2)Extended
 //The Basic is given below:

int gcd(int a,int b){
    if(a>b)swap(a,b);
    else{
        if(a==0) return b; 
        return gcd(b%a,a);
    }
}
int lcm(int a,int b){  //lo-sha-gu
    return (a*b)/gcd(a,b);
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int a,b;
   cin>>a>>b;
   cout<<lcm(a,b)<<nn;  //time complexity = O(log(min(a,b)))
return 0;
}
 
 

/*   Notation: HCF(a, b) or GCD(a, b) HCF=Highest Common Factor , GCD=Greatest Common Divisor
     Properties:
        1) HCF(a, 0) = a (for any integer a)
        2) HCF(a, b) = HCF(b, a) (commutative property)
        3) HCF(a, b) = HCF(a - b, b) (Euclid's algorithm)
*/

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
// 1)
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

// 2)
//or, I can find all the divisors for a and b and find the greatest common divisor out of them and time complexity will be O(sqrt(n)) + O(sqrt(a*b)) 
//how O(sqrt(a*b)) = highest number of factors that a number can have is 2*sqrt(n) so here are 2 numbers a and b so it will be 2*sqrt(a) * 2*sqrt(b)



// 3)
//Using Euclidean Algorithm ...There are 2 types in this Algorithm : 1) Basic and 2)Extended
 //The Basic is given below:
int gcd(int a,int b){
    if(a>b)swap(a,b);
    else{
        if(a==0) return b;   //O(log(min(a,b))) and this is the best time complexity for finding gcd//
        return gcd(b%a,a);
    }
}

//__gcd(a,b) which is built in function ..since it is a built in function it has some complexities regarding long long and precisions issues .
//so it is better to use the Euclidean method

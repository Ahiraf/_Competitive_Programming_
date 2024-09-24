#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);
 //Using Ecludian Algorithm ...There are 2 types in this Algorithm : 1) Basic and 2)Extended
 //The Basic is given below:
int gcd(int a,int b){
    if(a>b)swap(a,b);
    else{
        if(a==0) return b; 
        return gcd(b%a,a);
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int g=gcd(arr[0],arr[1]);
   for(int i=2;i<n;i++){
    g=gcd(g,arr[i]);          // gcd(a,b,c) = gcd(gcd(a,b),c)
   }
   cout<<g<<nn;  //time complexity = O(log(min(a,b)))
return 0;
}
 
 

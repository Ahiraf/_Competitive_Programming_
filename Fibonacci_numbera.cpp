Description
Given a number N. Print first N numbers of the Fibonacci sequenceNote: In order to create the Fibonacci sequence use the following function:
fib(1) = 0.
fib(2) = 1.
fib(N) = fib(N−1) + fib(N−2).
Input Format
Only one line containing a number N.

Output Format
N numbers from the Fibonacci Sequence.

Constraints
1≤N≤45

Sample Input 1
7
Sample Output 1
0 1 1 2 3 5 8



#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);

void solve() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"0"<<nn;
    }
    else{
        int a=0,b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            cout<<a+b<<" ";
            int t=b;
            b=a+b;
            a=t;
        }
        cout<<nn;
    }       
    }
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // ll test; cin>>test;while(test--)
    solve();
   
return 0;
}



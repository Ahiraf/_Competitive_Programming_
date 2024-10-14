// Problem Url : https://codeforces.com/contest/1475/problem/A
//Learnings  : I was thinking how to solve this then this came to mind that all the numbers has an odd divisor except the those which are power of 2's

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
void kodiko(){
 int n,ans;
 cin>>n;
 int temp=n;
 int cntpow=0;
 while(n>1){
    n/=2;
    cntpow++;
 }
 if(pow(2,cntpow)==temp)cout<<"NO\n";
 else{
    cout<<"YES\n";
 }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

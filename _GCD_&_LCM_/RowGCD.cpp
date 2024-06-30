//Problem Url: https://codeforces.com/contest/1458/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a,int b){
    if(a>b){
        swap(a,b);
    }
    if(a==0) return b;
    else{
        return gcd(a,b%a);
    }
}
//O(log(max(a,b)))
void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    int prevalue=0;    // gcd(x,0) = x
    for(int j=1;j<n;j++){
       prevalue=gcd((arr[j]-arr[0]),prevalue);   //gcd(a,b) = gcd(a,b-a) when,b>a  that's why I have sorted arr..
    }
    for(int i=0;i<m;i++){
        cout<<gcd(brr[i]+arr[0],prevalue)<<" ";
    }
    cout<<"\n";    
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--) 
        solve();
    return 0;
}

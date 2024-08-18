//Problem Url: https://codeforces.com/problemset/problem/1380/A
/*Learnings: 
        According to question I have to focus on arr[j]. I have to check if arr[j-1] < arr[j] > arr[j+1]   */

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back 
const int N=1000;
void solve()
{
    int n,i,flag=0;cin>>n;
    int arr[N];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for( i=0;i<n-1;i++){
      if(i>0){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
          flag=1;
          break;
        }
      }
    }
    if(flag)  cout<<"Yes\n"<<i<<" "<<i+1<<" "<<i+2<<nn;
    else{
      cout<<"No\n";
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--) 
        solve();
    return 0;
}

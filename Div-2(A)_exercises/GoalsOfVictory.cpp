//Problem Url : https://codeforces.com/problemset/problem/1877/A

/* Learnings: 
            Here I made a mistake first for which my was not coming . I took input of n and initialized the array arr[n] which means this
          array will store n elements. But in the given input of the question there was n-1 inputs . That's why no output was showing .
           I corrected that and then found the output */




#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn "\n"
#define pb push_back
 
void solve()
{
    int n,negCnt=0,posCnt=0,ans=0;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
      if(arr[i]<0)negCnt+=arr[i];
      else{
        posCnt+=arr[i];
      }
    }
    if(abs(negCnt)>posCnt){
      ans = abs(negCnt+posCnt);
    }
    else{
      ans=-(negCnt+posCnt);
    }
    cout<<ans<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--) 
        solve();
    return 0;
}

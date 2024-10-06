//Problem url : https://codeforces.com/problemset/problem/1834/A
/*Learnings : 
          I did a mistake here. I was first checking if the number of negatives is odd or not . Then checking the sum. But I have to check the sum first . Then have to check 
           the negCnt is even or odd ... */



#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
 
 
void solve()
{
    int n,i,negCnt=0,posCnt=0,ans=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for( i=0;i<n;i++){
      if(arr[i]==-1)negCnt++;
      if(arr[i]==1)posCnt++; 
    }
    while(negCnt>posCnt){
          ans++;
          negCnt--;
          posCnt++;
    }
    if(negCnt%2)ans++;
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

// Problem Url : https://codeforces.com/contest/460/problem/A


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
void kodiko(){
  int n,m;
  cin>>n>>m;
   int s = 0;
    s = n + n/(m - 1);
    //n / (m - 1):This expression calculates how many times
    //a new pair of socks is added by his mother during the days Vasya is wearing socks.

    if (n%(m - 1) == 0) s -= 1;
    //checks if n is perfectly divisible by m-1. If it is, it means that on the last day, 
    //when Vasya would have received his last new pair of socks he would receive it in the evening.
    //But he would need the socks in the morning on that day. So he would definitely run out of socks.

    cout<<s<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}


                                        /* My solution code : 
                   

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
void kodiko(){
  int n,m;
  cin>>n>>m;
  int days=n,multi=m;
  int i=1;
  if(n==1){
    cout<<"1"<<nn;
    return;
  }
  else if(n==m){
    cout<<n+1<<nn;
    return;
  }
  while(m<days){
      days++;
      m=multi*i;  
     // cout<<days<<" "<<m<<nn;
      i++;
  }
  if(m>=days && i!=1)cout<<days-1<<nn;
  else{
    cout<<days<<nn;
  }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 */
 

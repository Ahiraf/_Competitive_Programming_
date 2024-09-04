//Problem Url :https://codeforces.com/contest/2008/problem/B
/*Learnings : 
1 1 1 1 1 1 1 1  <- 1st row (all 1s)
1 0 0 0 0 0 0 1  <- 2nd row (1s on the border, 0s inside)
1 0 0 0 0 0 0 1  <- 3rd row (1s on the border, 0s inside)
..............
..............
1 0 0 0 0 0 0 1  <- (k-1)th row
1 1 1 1 1 1 1 1  <- kth row (all 1s)

When flattening this matrix row by row into a string :
First Row : The first k elements of the string will be 1.
Subsequent Rows: The next rows (from 2nd to (k-1)th) will each contribute 1 at the start, followed by k−2 0s,
and then another 1 at the end.
Last Row: The last k elements of the string will be 1.

Identifying When the First 0 Appears :
The first 0 in the matrix will appear in the second row and the second column. In the flattened string,the first 0 
will appear immediately after the first k 1s (which correspond to the first row).
Thus, the first 0 will be at position k+1 in the flattened string.*/


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;
const int N=1e5;

void solve(){
 int n,flag=0;
  cin>>n;
  string s;
  cin>>s;
  int i=0;
 while(i<n && s[i]=='1'){
  i++;
 }//In case of While loop if the condition is false once the loop will break .
 // Afer completing the loop the final i will represent the index of first 0
 // cout<<i<<" ";
  if(i==n){
    if(n==4)cout<<"Yes\n";
    else{
      cout<<"No\n";
    }
  }
  else{
    if((i-1)*(i-1)==n)cout<<"Yes\n";
    else{
      cout<<"No\n";
    }
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
 










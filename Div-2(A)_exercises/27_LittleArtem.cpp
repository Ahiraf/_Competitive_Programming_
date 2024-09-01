//Problem Url : https://codeforces.com/contest/1333/problem/A
//Learnings : I forgot about the test case of n==2 and m==2 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back()
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;

void kodiko(){
  int n,m;
  cin>>n>>m;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(((n*m)%2==0) && i==n-1 && j==m-2){
          cout<<"BB";
          break;
        }
        else if(i%2==0){
          if(j%2==0){
            cout<<"B";
          }
          else{
            cout<<"W";
          }
        }
        else{
          if(j%2==0){
            cout<<"W";
          }
          else{
            cout<<"B";
          }
         
        }
      }
       cout<<nn;
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
 

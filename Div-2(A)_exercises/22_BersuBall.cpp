//Problem Url : https://codeforces.com/contest/489/problem/B
//Learning : while erasing the element from v1 I forgot to resize the v1 vector or to reduce the size(m) of the vector.

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,m,pairs=0;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  cin>>m;
  vector<int>v1(m);
  for(int i=0;i<m;i++){
    cin>>v1[i];
  }
  sort(v1.begin(),v1.end());
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(abs(v[i]-v1[j])==1 || v[i]-v1[j]==0){
        pairs++;
        v1.erase(v1.begin()+j);
        m--;
        break;
      }
    }
  }
  cout<<pairs<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

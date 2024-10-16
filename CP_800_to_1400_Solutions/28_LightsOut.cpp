//Problem Url : https://codeforces.com/contest/275/problem/A

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

void kodiko(){
  vector<vector<int>>v(3,vector<int>(3)),v2(3,vector<int>(3,1));
  // All elements of v2 vector is initialized to 1 as the lights was on at first.
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>v[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(v[i][j]%2)
      {
        v2[i][j]= !v2[i][j];
        if(i==0)v2[i+1][j]= !v2[i+1][j];
        else if(i==2)v2[i-1][j]= !v2[i-1][j];
        else {
          v2[i+1][j] = !v2[i+1][j];
          v2[i-1][j] = !v2[i-1][j];
        }
        if(j==0)v2[i][j+1] = !v2[i][j+1];
        else if(j==2)v2[i][j-1] = !v2[i][j-1];
        else{
          v2[i][j+1] = !v2[i][j+1];
          v2[i][j-1] = !v2[i][j-1];
        }
      }
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<v2[i][j];
    }
    cout<<nn;
  }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

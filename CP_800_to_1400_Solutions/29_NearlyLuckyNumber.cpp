//Problem Url : https://codeforces.com/contest/110/problem/A

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

bool lucky(int n)
{
  if(n==0)return false;
  while(n>0){
    if(n%10!=4 && n%10!=7) return false;
    n/=10;
  }
  
  return true;
}

void kodiko(){
  int n,cnt=0;
  cin>>n;
  while(n>0){
    if(n%10==4 || n%10==7)cnt++;
    n/=10;
  }
 // cout<<cnt<<nn;
  if(lucky(cnt))cout<<"YES\n";
  else{
    cout<<"NO";
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
 

//Problem Url : https://codeforces.com/contest/165/problem/A

/* At first I did a mistake . I used a map instead of vector of pair . But it is wrong . Because, 
****  Duplicate x Values: A map<int, int> stores unique keys. If there are multiple points with the same x coordinate
                          but different y coordinates, the map will overwrite the previous y value with the new one. 
                          This means the code will lose data for points with duplicate x values.

  */
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
 int n,l=0,r=0,up=0,low=0,ans=0;
 cin>>n;
 vector<pair<int,int>>v(n);
 for(int i=0;i<n;i++)
 {
 cin>>v[i].first>>v[i].second;
 }
 for(int i=0;i<n;i++)
 {
  int l=0,r=0,up=0,low=0;
  for(int j=0;j<n;j++)
 {
  if(v[i].first>v[j].first && v[i].second==v[j].second)r++;
  else if(v[i].first<v[j].first && v[i].second==v[j].second)l++;
  else if(v[i].second>v[j].second && v[i].first==v[j].first)up++;
  else if(v[i].second<v[j].second && v[i].first==v[j].first)low++;
 } 
 if(r>0 && l>0 && up>0 && low>0)ans++;
 }
 cout<<ans<<nn;
 }

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

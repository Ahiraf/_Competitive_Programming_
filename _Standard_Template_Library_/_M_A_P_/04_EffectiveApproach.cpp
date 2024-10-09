//Problem Url : https://codeforces.com/contest/227/problem/B

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
 int n,cnt=0,sum=0;
 cin>>n;
 vector<int>a(n);
 map<int,int>ind;
 for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    ind[a]=i;
 }
 int m;
 cin>>m;
 int v=0,p=0;
 for(int i=1;i<=m;i++)
 {
    int b;
    cin>>b;
    v+=ind[b];
    p+=(n-ind[b])+1;
 }
 cout<<v<<" "<<p<<nn;
 }

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

//Problem Url : https://codeforces.com/contest/236/problem/A
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
 string s;
 cin>>s;
 set<int>name;
 int cnt=0;
 for(int i=0;i<s.size();i++){
  name.insert(s[i]);
 }
 if(name.size()%2==0)cout<<"CHAT WITH HER!";
 else cout<<"IGNORE HIM!";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

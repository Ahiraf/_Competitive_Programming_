//Problem Url : https://codeforces.com/contest/224/problem/A
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
 
   int a1,a2,a3;
   cin>>a1>>a2>>a3;
   int a=sqrt((a1*a2)/a3);
   int b=sqrt((a1*a3)/a2);
   int c=sqrt((a3*a2)/a1);
   cout<<4*(a+b+c)<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

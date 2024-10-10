//Problem Url : https://codeforces.com/contest/352/problem/A

/* Any number will be divisible by 9 If the sum of every digits of this number is divisible by 9. 
For example  : if 555555555. Here the number of 5 is 9 . So total sum of every digit in this number is ,
5x9=45 ,which is divisible by 9 . That means 555555555 will also be divisible by 9.  */

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
   int n,cnt5=0,total5,cnt0=0;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==5)cnt5++;
    if(v[i]==0)cnt0++;
   }
   if(cnt5<9){
    if(cnt0==0)cout<<-1<<nn;
    else cout<<0<<nn;
    return;
   }
   while((cnt5*5)%9 && cnt5>=9){
    cnt5--;
   }
   int divBy9= (cnt5*5)%9;
   if(divBy9==0){
    if(cnt0==0)cout<<-1;
    else{
        total5=cnt5;
        while(total5--)cout<<5;
        while(cnt0--)cout<<0;
        cout<<nn;
    }
   }
   else{
    if(cnt0==0)cout<<-1<<nn;
    else cout<<0<<nn;
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
 

//Problem url : https://codeforces.com/problemset/problem/1853/A
/*Learnings : 
  
  1) We generally use a boolean variable flag to check something . But here I have to check 3 things : 
     i) sorted?    ii) all equal elements ?   iii) not sorted ? so I was finding it harder when I was trying to solve 
     this using flag ....rather I can use " &= " operator to do this ...   
  2) here in the second for loop I have used if(i>0) which will prevent from resulting in out of bound ...  */


Solution:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn "\n"
#define pb push_back


void solve()
{
    int n,diff=1e9;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    }
    bool is_sorted = true;
    for(int i=0;i<n;i++){
        if(i>0){
            diff=min((v[i]-v[i-1]),diff);
            is_sorted &= v[i]>=v[i-1];
        }
    }
    if(is_sorted==false)cout<<"0"<<nn;
    else{
        cout<<(diff/2)+1<<nn;
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

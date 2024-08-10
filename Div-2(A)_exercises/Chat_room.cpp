// Problem Url:https://codeforces.com/contest/58/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
 
void kodiko(){
    string s;
    cin>>s;
    int k=0;
    string check="hello";  //If I make the target string at first it will be easier to solve the problem
    for(int i=0;i<s.size();i++){
        if(s[i]==check[k]){
            k++;
        }
        if(k==5){
            break;
        }
    }
    if(k==5)cout<<"YES\n";
    else{
      cout<<"NO\n";
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
 

//Problem Url : https://codeforces.com/contest/320/problem/A

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

bool is_magical(string s){
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]!='1' && s[i]!='4')return false;
        else if(s[0]=='4')return false;
        else if(s.find("444") != s.npos)return false; //When find doesn't locate the substring, it returns npos. 
                                                      //Therefore, comparing the result of find to npos tells  
    }                                               //whether the substring was found .
    return true;
}
void kodiko(){
   string s;
   cin>>s;
   if(is_magical(s))cout<<"YES\n";
   else cout<<"NO\n"; 
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

//problem url : https://maang.in/problems/Divide-the-Piles-67?resourceUrl=cs103-cp518-pl3503-rs67
//Similar problem : https://github.com/Ahiraf/_Competitive_Programming_/blob/main/_GCD_%26_LCM_/DeckofCards.cpp



#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);
int gcd(int a,int b){
    if(a>b)swap(a,b);
        if(a==0)return b;
        return gcd((b%a),a);
    
}
void solve(){
    int n;
    cin>>n;
    int g=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        g=gcd(g,x);

    }
    if(g>1)cout<<"Yes"<<nn;
    else{
        cout<<"No"<<nn;
    }
    

}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   ll test;cin>>test;while(test--)
   solve();
return 0;
}
 
 

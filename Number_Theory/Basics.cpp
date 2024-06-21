Problem url :https://codeforces.com/contest/1919/problem/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b;
cin>>t;
for(int i=0;i<t;i++){
    cin>>a>>b;
    if((a+b)%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
}
    return 0;
}

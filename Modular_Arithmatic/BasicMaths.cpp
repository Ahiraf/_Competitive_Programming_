#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define int long long int
int MOD = 1e9+7;
int binpow(int base,int expo){
    if(expo==0)return 1;
    else if(expo % 2){
        return binpow(base*base,expo-1)%MOD;
    }
    else{
        int temp=binpow(base,(expo/2));
        return (temp*temp)%MOD;
    }
}
signed main() {
    //a+b-c*d+e^f/g
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
    int temp1=a+b;
    int temp2=c*d;
    int temp3=(temp1-temp2)%MOD;
    int temp4=binpow(e,f);
    int temp5=temp4/g;
    int temp6=temp3+temp5;
    cout<<temp6<<nn;





int binpow(int a,int b,int c){
    if(b==0) return 1;
    if(b%2) return (a*binpow(a,b-1,c))%c ;
    else{
    int temp=binpow(a,b/2,c);
    return (temp*temp)%c ;
    }
}




    // ( (a*b) - (c^d) ) / e
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
a%=MOD;
b%=MOD;
c%=MOD;
e%=MOD;
// Now for every operations do an operation and calculate its MOD
int temp1=(a*b)%MOD;
int temp2= binpow(c,d,MOD); //binpow function itself does the function of MoD
int temp3=(temp1-temp2)%MOD;
int temp4=binpow(e,MOD-2,MOD);
int ans=(temp3*temp4)%MOD;
ans=ans%MOD;
cout<<(ans+MOD)%MOD<<nn;

}




/*      Input : 
        2
        Fariha Rayhan
        Nasima Akhter           */



include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
void solve() {
      int n;
      cin>>n;  //Here, when I press enter key it takes '\n' as input and creates error in the next lines though i have used getline
      string temp;   //to correct that here I have declared another string that will take the '\n' as input and will fix the problem
      getline(cin,temp);

      string arr[n];
      for(int i=0;i<n;i++){
         getline(cin,arr[i]);  //Now the first name will be taken as input with space correctly
      }
      for(int i=n-1;i>=0;i--){
         cout<<"Hi "<<arr[i]<<" !"<<nn;
      }
      
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll test; cin>>test;while(test--)
    solve();
   
return 0;
}



/*    Output : 
      Hi Nasima Akhter !
      Hi Fariha Rayhan !          */













Problelm url : https://codeforces.com/contest/1950/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    //ios_base::sync_with_stdio(0);
   // cin.tie(0);
   /* int t;
    cin>>t;
    while(t--){
    int n;
    vector<vector<char>>v;
    cin>>n;
 
      for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
          cout<<"#";
            }
            cout<<'\n';
    }
     for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
          cout<<".";
            }
            cout<<'\n';
    }
    }*/
 
    int t;
    cin>>t;
    while(t--){
 
       string time;
        cin >> time;
        int hour = (time[0] - '0') * 10 + (time[1] - '0');
        int minute = (time[3] - '0') * 10 + (time[4] - '0');
        string period = (hour >= 12) ? "PM" : "AM";
        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour -= 12;
        }
        cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }
 
    return 0;
}

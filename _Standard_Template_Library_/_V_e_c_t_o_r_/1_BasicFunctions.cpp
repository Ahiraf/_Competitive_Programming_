#include<bits/stdc++.h>
using namespace std;  //vector is continuous memory block like array//
void printvec(vector<int>&v){
    cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
}
v.push_back(2);
cout<<endl;
}

int main(){
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    printvec(v);
    v.push_back(x);
}
printvec(v);
vector<int>v(10,3);
v.push_back(7);
v.pop_back();
printvec(v);
vector<int>&v2=v;//vector copy ....array r khetre ebhabe korle array er pointer copy hoto//.....but time complexity O(n)..tai functiion a ref pass korbo
v2.push_back(5);
printvec(v);
printvec(v2);

}





                                                    //Vector of Pair///


void printvec(vector<pair<int,int>>&v){
cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<" ";
}
cout<<endl;
}

int main(){

vector<pair<int,int>>v;
printvec(v);
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
}
 printvec(v) ;
}


                                                      //Vector of vector//
//Same as 2D array ........
int main() {
int n,m; //nxm 2D vector
vector<vector<int>>v(n,vector<int>m);
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
     cin>>v[i][j];
  }
}












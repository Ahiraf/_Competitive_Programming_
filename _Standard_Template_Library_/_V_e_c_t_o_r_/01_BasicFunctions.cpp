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
//Vector has four types of iterator : 1)v.begin()  ,  2) v.end()  ,  3) v.rbegin()->same as v.end()  ,  4)v.rend()->same as v.begin()
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

                                // Iterator of Vector 


    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = (--v.end());
    cout << (*it) << '\n'; // Output : 5





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
}       //O(n*m)

//Use of some other functions :
int main(){
int q;
   cin>>q;
   vector<int>v;
   while(q--){
    string m;
    cin>>m;
    if(m=="add"){
        int x;
        cin>>x;
        v.push_back(x);//will add element to the back of the vector  
    } //O(1)
    if(m=="remove" && !v.empty()){//If the vector is not empty then it will remove element
        v.pop_back();  //O(1)
    }
    if(m=="print"){
            int x;
            cin>>x;
            if(x<v.size()){//If the given index in less the size of the vector then it will print the element of that index
                 cout<<v[x]<<nn;
            }
        else{
            cout<<"0"<<nn;
        }
    }
    if(m=="clear"){ //O(n) , n= the number of elements of the vector 
        v.clear(); // Will remove all the elements of the vector
    }
   }
}











#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

                           //Canvas//


//Level = 1:
//At first I have to see the canvas size//
/*x x x x x
  x x x x x
  x x x x x     //This is a n*n canvas where n=5
  x x x x x 
  x x x x x*/
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"x";
    }
    cout<<nn;
  }



//level = 2:
/*    x
       x       //i=mx+c
        x     //canvas size = 6
         x    //for first x, i=0 , j=0 then c will be 0 so the eqn will be i=j
          x
           x        */

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }

 /*   x    //i+j=c 
    x      //n=5
   x      for any x , if i=1,j =3,then c will be 4, or c=n-1;
  x      //finally , i+j=n-1;
x       */

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+j==n-1)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }


/* x     x   
    x  x      
     x      
   x   x  
  x     x */

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+j==n-1 || i==j)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }


//Level = 3 :

/*   x
    xx      
   xxx     diagonal will be i+j=n-1 so take any point under the diagonal then i will be high of that point that means i+j>n-1
  xxxx      
 xxxxx
xxxxxx  */

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+j>=n-1)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }

/*  x
    xx
    xxx
    xxxx
    xxxxx
    xxxxxx */
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>=j)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }


//                               _Shaded_Region_


    
/*       x    
        xxx   
       xxxxx  
      xxxxxxx 
     xxxxxxxxx         */
for(int i=0;i<n;i++){
    for(int j=0;j<2*n-1;j++){
        if(i+j>=n-1 && i>=j-n+1)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }


return 0;
}



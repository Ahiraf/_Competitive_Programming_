#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

                           //Canvas//

//in this type firstly I have to find the canvas size or the value of i and j
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
/*x
   x       //i=mx+c
    x     //canvas size = 6
     x    //for first x, i=0 , j=0 then c will be 0 so the eqn will be i=j
      x
       x*/

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

//Level : 3

 /*  x    //i+j=c 
    x      //n=5
   x      for any x , if i=1,j =3,then c will be 4, or c=n-1;
  x      //finally , i+j=n-1;
 x        */

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

//Level : 4
/* x      x   
     x  x      
      x      
    x   x  
  x       x   */

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


//Level = 5 :

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


//level : 6
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

//Level : 7

//                               _Shaded_Region_
    

/*     x    
      xxx   
     xxxxx  
    xxxxxxx 
   xxxxxxxxx      */

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

//Level : 8
//  Given n=6 
                                     //Row no:
/*  x   x   x   x   x   x   x   x        1
     x x x x x x x x x x x x x x         2
      x 1 x 2 x 3 x 4 x 5 x 6 x          3
     x x x x x x x x x x x x x x         4
    x   x   x   x   x   x   x   x        5                  
  1 2 3                        1 2
 //   1 2 3 4  Which will be repeated and lastly there will be 2 columns left and at first there were 3 columns so,
 //The equation of column number will be  3+(4n+2) = 4n+5......Here n=6  */

//same code as level 2's cross pattern
n=6;
for(int i=0;i<5;i++){
    for(int j=0;j<(4*n+5);j++){
        if(i+j%4==5-1 || i==j%4) //Bcz 4 columns were repeating...the repeating pattern is the copy of the first cross pattern
        cout<<"x";               //And here instead of i+j%4==n-1 , it will be 5-1 bcz the value of i is 5
        else{                   //Mod will tranfer any j to the first block and will see whether it space or x in that position in the first block.Then it will copy the same
           cout<< " ";
        }
    }
    cout<<nn;
  }

//Level : 9
//      01234567
/*  0 a       i                 
    1  b     h                  
    2   c   g                   
    3    d f                    
    4     e        */

for(int i=0;i<5;i++){
    for(int j=0;j<26;j++){
        if(i==j || i+j==8)
        cout<<char('a'+j);
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }

//Level : 10
/*  a       i       q       y 
     b     h j     p r     x z
      c   g   k   o   s   w   
       d f     l n     t v    
        e       m       u       */


for(int i=0;i<5;i++){
    for(int j=0;j<26;j++){
        if(i==j%8 || i+j%8==8)
        cout<<char('a'+j);
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }
//Level : 11

/*     x    
      xxx   
     xxxxx  
    xxxxxxx 
   xxxxxxxxx     |x|+|y|=c
    xxxxxxx 
     xxxxx  
      xxx   
       x    */

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(abs(i-5)+abs(j-5)<=4)
        cout<<"x";
        else{
           cout<< " ";
        }
    }
    cout<<nn;
  }
return 0;
}



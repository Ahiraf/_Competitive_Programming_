Problem Url: https://codeforces.com/contest/1915/problem/A

#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int a,b,c;
for(int i=0;i<t;i++){    //Time complexity : O(n)
        scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        printf("%d\n",c);
    }
    if(c==b){
        printf("%d\n",a);
    }
    if(a==c){
        printf("%d\n",b);
    }
 
 
 
}
return 0;
 
}

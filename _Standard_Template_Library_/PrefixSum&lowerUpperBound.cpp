#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h> 
 
using namespace std;

int main(){
  /* Q-1) there are n items prices .....I have a budget to but these items .How many items can I buy 
           in my budget that the number of items will maximum ?*/
           //in this question quantity matters not quality
        int n;cin>>n;//n=5
        int arr[n];////{3,5,6,4,8}
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);//{3,4,5,6,8}      // O(nlog(n))
             //first i have to buy those items which prices are smaller..so that i can buy max items
        int b,ans=0;       
        cin>>b;//b= 12
        for(int i=0;i<n;i++){
            if(arr[i]<=b){ //arr[i]=3 
                ans++;//so, ans = 1 and b=(12-3)=9...after buying first item my budget is now 9
                b-=arr[i];
            }
            else{
                break;
            }
        }
        cout<<ans<<'\n';
   // total time complexity = O(nlog(n)) + O(n)          




 /*Q-2) Now I have q number of queries of budgets.So for different budgets what will be the 
         maximum number of items now ?*/

  int n;cin>>n;//n=5
        int arr[n];////{3,5,6,4,8}
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);//{3,4,5,6,8}      // O(nlog(n))
        int q;
        cin>>q;
        while(q--){
        int b,ans=0;       
        cin>>b;//b= 12
        for(int i=0;i<n;i++){     //O(q*n)
            if(arr[i]<=b){
                ans++;
                b-=arr[i];
            }
            else{
                break;
            }
        }
        cout<<ans<<'\n';
        }
//Total time complexity will be O(nlog(n)) + O(q*n)  
// But when the constraints are  1 <= n,q <=10^5 ..it will show TLE.So to solve this , 
// Using prefix sum : 

        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i]; //O(n)
        }
        sort(arr,arr+n); //for this process the arr should also be sorted
        int prefix[n];
        int b,ans=0;       
        cin>>b;
        int q;
        cin>>q;
        while(q--){
        for(int i=0;i<n;i++){         
           if(i>0){
            prefix[i]=arr[i]+prefix[i-1]; //Time complexity of prefix sum = O(nlog(n))

           }
           else{
            prefix[i]=arr[i];
           }
        }
        int ans = upper_bound(prefix,prefix+n,b)-prefix; //O(log(n))
        cout<<ans<<'\n'; //O(n) in case of vector, upper_bound(prefix.begin(),prefix.end(),b)-prefix.begin()
        }
//Total time complexity O(n) + O(nlog(n)) + O(q*log(n)) + O(n) = O(nlog(n)) + O(q*log(n)) =O((n+q)log(n))


//Q- 3) Given an array of size N. Find the sum of all subarray of the array when , 
//  i) N<= 10^2
// ii) N<= 10^3
// iii) N <= 10^5
                                  //i)
    int N; cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
    int ans=0;
    for(int st=0;st<N;st++){
        for(int en=st;en<N;en++){
           int cursum=0;
           for(int i=st;i<=en;i++){
               cursum+=arr[i];
            }
            ans+=cursum;
        }
    }
    cout<<ans<<'\n';

                           



return 0;
}








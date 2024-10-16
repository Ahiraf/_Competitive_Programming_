#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;
const int N=1e5;

//Target is to take the minimum element at the last index, and the maximum elemet to at 0 index.
//That's why the Positions will be :
//Maximum Height: I have to Find the first occurrence of the maximum height in the list. This soldier needs to be moved to the front.
//Minimum Height: I have to Find the last occurrence of the minimum height in the list. This soldier needs to be moved to the end.

void kodiko(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  int max,min,maxi=0,mini=0; //Indices of minimum and maximum elements are set as 0 first .
  for(int i=0;i<n;i++)
  {
    if(i==0)
    {
      max=v[i];min=v[i];
    }
    else if(v[i]<=min){
      min=v[i];
      mini=i;
    }
    else if(v[i]>max){
      max=v[i];
      maxi=i;
    }
  }
 // Swaps for Maximum Height: The number of swaps required to bring the tallest soldier to the front is equal to its current position index.
//Swaps for Minimum Height: The number of swaps required to bring the shortest soldier to the end is equal to the number of soldiers after its current position, which is (n - 1 - mini).
  
//Adjust for Overlap:If the tallest soldier is positioned before the shortest soldier in the original lineup (maxi > mini),
//moving the tallest soldier to the front will shift the position of the shortest soldier one place to the right. Therefore, we need to subtract one from the total swaps to account for this overlap.

  
  int swapForMinValue=n-mini-1;
  int swapForMaxValue=maxi;
  cout<<((max==min)? 0:(swapForMinValue+swapForMaxValue - ((maxi>mini)? 1:0)))<<nn;

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 

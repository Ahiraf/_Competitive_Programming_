//Problem Url: https://codeforces.com/problemset/problem/1904/A
//Similar problem for  practice: https://maang.in/problems/8-Neighbors-1141?resourceUrl=cs103-cp518-pl3499-rs1141
/* Learnings :
          i) Using "set" allows us to store unique positions that a knight can move to.This ensures that we handle 
             each unique attack position only once, despite the knight's potentially overlapping movements.By inserting calculated 
              positions into two separate sets (st1 for the king's potential attack positions and st2 for the queen's),
              we can then find the intersection of these sets to determine common attack positions.
              
          ii)For the first test case: Knight's movement is defined by a=2 and b=1.King's position is (0,0).Queen's position is (3,3).
            ~ The knight's possible moves "from the king's position" (0, 0) would be:{(2,1), (2, -1), (-2,1), (-2, -1), (1,2), (1, -2), (-1,2), (-1, -2)}
            ~"From the queen's position" (3,3):  {(5,4), (5,2), (1,4), (1,2), (4,5), (4,1), (2,5), (2,1)}
            ~Total positions = 16 and Note:(I couldn't solve the problem by my own, I have to see the editorial and the only reason behind
                                          this was I didn't focus on this => "From the King's position" and "From the queen's position" <=)
            ~The common positions are {(2,1)}, so the answer for this test case is 1........
             
          iii) As the problem says it is an infinite chess board, so there will be no reference point like we have when we work in 
                 a rectangular cartesian co-ordinate ..    */


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back


void solve()
{
    int a,b,x1,y1,x2,y2;
    cin>>a>>b>>x1>>y1>>x2>>y2;
    int dx[4]={1,-1,-1,1},dy[4]={1,1,-1,-1};//Think about all the quadrant while taking the elements
    set<pair<int,int>>s1,s2;//for unique positions 
    for(int i=0;i<4;i++){
        s1.insert({(x1+dx[i]*a),(y1+dy[i]*b)});// here s1 stores all the knights's positions
        s1.insert({(x1+dx[i]*b),(y1+dy[i]*a)});// from the king's position;

        s2.insert({(x2+dx[i]*a),(y2+dy[i]*b)});// here s2 stores all the knights's positions
        s2.insert({(x2+dx[i]*b),(y2+dy[i]*a)});// from the queen's position;
    }

    int ans=0 ;
    for(auto it:s1){
        if(s2.find(it) != s2.end()){
            ans++;
        }
    }
    cout<<ans<<nn;

}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--) 
        solve();
    return 0;
}





  

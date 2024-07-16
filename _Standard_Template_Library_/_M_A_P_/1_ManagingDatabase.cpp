/*   Imagine managing a database of dashboard of some firm with the following operations:

     Insert: Add a new user to the server named x, with some value.

     Sum: Sum of all the value of user.

     Erase Entries: Remove particular user.

     Get Max: Retrieve the max value of the user.

     Get Distinct: No. of users with distinct value.         */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn "\n"
#define pb push_back

struct bag{
    int cur_sum = 0;
    map<int, int> mp;

    void insert(int x)    // 0(logn)
    {
        cur_sum += x;
        mp[x]++;
    }
    int sum()    // 0(1)
    {
        return cur_sum;
    }
    void remove(int x)     // 0(logn)
    {
        cur_sum -= x;
        mp[x]--;
        if (mp[x] == 0) {   
            mp.erase(x); //If I didn't erase it then the map size for distinct value would show wrong
        }
    }
    int getmax()          // 0(1)
    {
        auto it = mp.end();
        it--;
        return it->first;
        //or, return (*mp.rbegin()).first;
        //or, return mp.rbegin()->first;
    }
    int getdistinct()   // 0(1)
    {
        return mp.size();
    }

};

void kodiko()
{
    bag b;
    b.insert(5);
    b.insert(7);
    b.insert(5);
    cout << "Sum: " << b.sum() << endl; // Output: Sum: 17
    cout << "Max: " << b.getmax() << endl; // Output: Max: 7
    cout << "Distinct: " << b.getdistinct() << endl; // Output: Distinct: 2
    b.remove(5);
    cout << "Sum after removing 5: " << b.sum() << endl; // Output: Sum after removing 5: 7  
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  // int test; cin >> test; while (test--) 
        kodiko();
    return 0;
}

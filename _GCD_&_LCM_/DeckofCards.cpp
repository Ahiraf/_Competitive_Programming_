Problem Url : https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>m;
        for(int i=0; i<deck.size(); i++){
           m[deck[i]]++ ;
        }
        int gcd=-1;
        for(auto it=m.begin(); it!=m.end(); it++){
            if(gcd==-1){
                gcd=it->second;
            }
            else{
               gcd=__gcd(gcd,it->second);
            }

        }
        if(gcd>1) return ;
        else{
           return false ;
        }
    }
};

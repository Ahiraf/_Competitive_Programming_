//Problem Url : https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       map<long long,long long>m;
       long cur_sum=0,i;
       long max_sum=0,distinct=0;
       for(i=0;i<nums.size();i++){
    m[nums[i]]++;
    cur_sum+=nums[i];
    if(m[nums[i]]==1) distinct++;
    if(i>=k){
      cur_sum=cur_sum-nums[i-k];
      m[nums[i-k]]--;
      if(m[nums[i-k]]==0)distinct--;
    }
    if(distinct==k){
      max_sum=max(cur_sum,max_sum);
    }
  }
  return max_sum;  
    }
};

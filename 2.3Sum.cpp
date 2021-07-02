Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
 

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105
  
  
  class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> res;
        int n = nums.size(),sum=0;
        for(int i = 0 ;i < n ; i++){
        if(i > 0 && nums[i] == nums[i-1])
                continue;
            
            int  l = i+1 , r = n-1;
            while(l < r ){
                sum = nums[i] + nums[l] + nums[r];
                
                if(sum < 0)
                    l++;
                else if (sum > 0)
                    r--;
                else{
                    res.push_back({nums[i] , nums[l] , nums[r]});
                    l++;
                    while(nums[l] == nums[l-1] && l < r){
                        l++;
                    }
                }
            }
        }
        return res;
    }
};

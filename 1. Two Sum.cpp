// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(mpp.find(target - nums[i]) != mpp.end())
            {
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};

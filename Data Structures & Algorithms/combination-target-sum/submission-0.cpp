class Solution {
public:
    void helper(int i, vector<int>&nums, int target, vector<vector<int>>&ans, vector<int>&curr){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i==nums.size()){
            return;
        }
        if(nums[i]<=target){
            curr.push_back(nums[i]);
            helper(i,nums,target-nums[i],ans,curr);
            curr.pop_back();
        }

        helper(i+1,nums,target,ans,curr);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        helper(0,nums,target,ans,curr);
        return ans;
    }
};

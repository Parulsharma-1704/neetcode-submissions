class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(mp.count(need)){
                int ind=mp[need];
                return {ind,i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};

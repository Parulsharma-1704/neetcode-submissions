class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int x : nums){
            s.insert(x);
        }
        int maxL=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int currL=1;
            while(s.count(num+1)){
                currL++;
                num=num+1;
            }
            maxL=max(maxL,currL);
        }
        return maxL;
    }
};

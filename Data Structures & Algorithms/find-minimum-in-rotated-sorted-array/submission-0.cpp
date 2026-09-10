class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<h){
            int m=(l+h)/2;
            if(nums[l]>=nums[h]){
                l=m;
            }
            else{
                h=m-1;
            }
        }
        return nums[l];
    }
};

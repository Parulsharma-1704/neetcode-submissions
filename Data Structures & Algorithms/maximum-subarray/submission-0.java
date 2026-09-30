class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum=-10000;
        int currSum=-10000;

        for(int i=0;i<nums.length;i++){
            currSum=Math.max(currSum+nums[i],nums[i]);
            maxSum=Math.max(currSum,maxSum);
        }
        return maxSum;
    }
}

class Solution {
    public boolean canJump(int[] nums) {
        int maxReach=0;
        int currReach=0;

        int i=0;
        while(i<nums.length){
            if(i==currReach){
                currReach+=nums[i];
            }
            i++;
        }
        if(currReach>=nums.length-1){
            return true;
        }
        return false;
    }
}

class Solution {
    public boolean canJump(int[] nums) {
        int goal =nums.length-1; //last index is goal

        for(int i=nums.length-2;i>=0;i--){
            if(i+nums[i] >= goal){ // how far it reaches
                goal=i;
            }
        }
        return goal==0;
    }
    //brute - recursion (all possibility)
}

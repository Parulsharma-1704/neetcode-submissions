class Solution {
    public void sortColors(int[] nums) {
        int left=0;
        int right=nums.length-1;
        int travs=0;

        while(travs<=right){
            if(nums[travs]==0){
                int temp=nums[left];
                nums[left]=nums[travs];
                nums[travs]=temp;

                left++;
                travs++;
            }
            else if(nums[travs]==2){
                 int temp=nums[right];
                nums[right]=nums[travs];
                nums[travs]=temp;

                right--;
            }
            else{
                travs++;
            }
        }
    }
}
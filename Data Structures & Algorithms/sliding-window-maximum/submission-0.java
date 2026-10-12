class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        Deque<Integer>dq=new ArrayDeque<>();
        int n=nums.length;
        int[]ans=new int[n-k+1];
        int i=0;
        int l=0;
        for(int r=0;r<nums.length;r++){
            while(!dq.isEmpty() && (nums[r]>=nums[dq.peekFirst()] || dq.peekFirst()<l)){
                dq.removeFirst();
            }
            dq.addLast(r);
            
            if(r-l+1==k && !dq.isEmpty()){
                 ans[i]=nums[dq.peekFirst()];
                 i++;
                l++;
            }
        }
        return ans;
    }
}

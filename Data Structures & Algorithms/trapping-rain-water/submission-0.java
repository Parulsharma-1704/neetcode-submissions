class Solution {
   
    public int trap(int[] height) {
       int leftMax=0;
       int rightMax=0;
       int l=0;
       int r=height.length-1;
       int total=0;
       
       while(l<=r){
        if(leftMax<=rightMax){
            if(height[l]>leftMax){
                leftMax=height[l];
            }
            else{
                total+=Math.min(leftMax,rightMax)-height[l];
            }
            l++;
        }
        else{
            if(height[r]>rightMax){
                rightMax=height[r];
            }
            else{
                total+=Math.min(leftMax,rightMax)-height[r];
            }
            r--;
        }
       }
       return total;
    }
}

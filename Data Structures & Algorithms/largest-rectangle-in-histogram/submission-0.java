class Solution {
    int[] pse(int[] heights){
        Stack<Integer>st=new Stack<>();
        int[] ans=new int[heights.length];
        Arrays.fill(ans,-1);
        for(int i=0;i<heights.length;i++){
            while(!st.isEmpty() && heights[st.peek()]>=heights[i]){
                st.pop();
            }
            if(!st.isEmpty()){
                ans[i]=st.peek();
            }
            st.push(i);
        }
        return ans;
    }
    int[] nse(int[] heights){
        Stack<Integer>st=new Stack<>();
        int[] ans=new int[heights.length];
        Arrays.fill(ans,heights.length);
        for(int i=heights.length-1;i>=0;i--){
            while(!st.isEmpty() && heights[st.peek()]>=heights[i]){
                st.pop();
            }
            if(!st.isEmpty()){
                ans[i]=st.peek();
            }
            st.push(i);
        }
        return ans;
    }
    public int largestRectangleArea(int[] heights) {
        int[] PSE=pse(heights);
        int[] NSE=nse(heights);
        int maxArea=0;

        for(int i=0;i<heights.length;i++){
            maxArea=Math.max(maxArea,(NSE[i]-PSE[i]-1)*heights[i]);
        }
        return maxArea;
    }
}

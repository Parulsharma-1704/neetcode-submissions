class Solution {
    public int[] nge(int[] temp){
        int[] ans=new int[temp.length];
        Arrays.fill(ans,-1);

        Stack<Integer>st=new Stack<>();
        for(int i=temp.length-1;i>=0;i--){
            while(!st.isEmpty() && temp[st.peek()]<=temp[i]){
                st.pop();
            }
            if(!st.isEmpty()){
                ans[i]=st.peek();
            }
            st.push(i);
        }
        return ans;
    }
    public int[] dailyTemperatures(int[] temperatures) {
        int[] ans=nge(temperatures);
        for(int i=0;i<temperatures.length;i++){
            if(ans[i]==-1){
                ans[i]=0;
            }
            else{
                 ans[i]=ans[i]-i;
            }
        }
        return ans;
    }
}

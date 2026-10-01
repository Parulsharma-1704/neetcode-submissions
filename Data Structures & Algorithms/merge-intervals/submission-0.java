class Solution {
    public int[][] merge(int[][] intervals) {
        ArrayList<int[]>ans=new ArrayList<>();
        ans.add(intervals[0]);

        int i=1;
        while(i<intervals.length){
            int n=ans.size();
            if(ans.get(n-1)[1]>=intervals[i][0]){
                ans.get(n-1)[0]=Math.min(ans.get(n-1)[0],intervals[i][0]);
                ans.get(n-1)[1]=Math.max(ans.get(n-1)[1],intervals[i][1]);
            }
            else{
                ans.add(intervals[i]);
            }
            i++;
        }
        return ans.toArray(new int[ans.size()][]);
    }
}

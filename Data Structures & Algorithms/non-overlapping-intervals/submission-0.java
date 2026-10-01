class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        int count=0;

        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        int ref=0;
        int i=1;
        while(i<intervals.length){
            if(intervals[ref][1]>intervals[i][0]){
                count++;
            }
            else{
                ref++;
            }
            i++;
        }
        return count;
    }
}

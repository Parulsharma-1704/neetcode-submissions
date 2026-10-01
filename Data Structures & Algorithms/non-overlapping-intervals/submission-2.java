class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        int count=0;
        Arrays.sort(intervals,(a,b)->Integer.compare(a[1],b[1]));
        int ref=0;
        int lastInd=-1;
        int i=1;
        while(i<intervals.length){
            if(intervals[ref][1]>intervals[i][0]){
                lastInd=i;
                count++;
            }
            else{
                ref=lastInd+1;
            }
            i++;
        }
        return count;
    }
}

/**
 * Definition of Interval:
 * public class Interval {
 *     public int start, end;
 *     public Interval(int start, int end) {
 *         this.start = start;
 *         this.end = end;
 *     }
 * }
 */

class Solution {
    public int minMeetingRooms(List<Interval> intervals) {
        int n=intervals.size();
        int[] s=new int[n];
        int[] e=new int[n];
        for(int i=0;i<n;i++){
            Interval meet=intervals.get(i);
            s[i]=meet.start;
            e[i]=meet.end;
        }
        Arrays.sort(s);
        Arrays.sort(e);
        int count=0;
        int ans=0;

        int i=0;
        int j=0;

        while(i<n && j<n){
            if(s[i]<e[j]){
                count++;
                i++;
            }
            else{
                count--;
                j++;
            }
            ans=Math.max(ans,count);
        }
        return ans;
    }
}

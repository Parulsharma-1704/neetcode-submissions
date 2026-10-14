class Solution {
    public int carFleet(int target, int[] position, int[] speed) {
        int[] time=new int[speed.length];
        for(int i=0;i<speed.length;i++){
            time[i]=(target-position[i])/speed[i];
        }

        Arrays.sort(time);
        int fleet=1;

        for(int i=1;i<time.length;i++){
            if(time[i]==time[i-1]){
                continue;
            }
            fleet++;
        }
        return fleet;
    }
}

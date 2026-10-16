class Solution {
    int canEat(int[] piles, int val){
        int hours=0;
        for(int i=0;i<piles.length;i++){
            hours+=(piles[i]+val-1)/val;
        }
        return hours;
    }
    int maximum(int[] piles){
        int x=0;
        for(int i=0;i<piles.length;i++){
            x=Math.max(x,piles[i]);
        }
        return x;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int l=1;
        int r=maximum(piles);
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int H=canEat(piles,mid);
            if(H<=h){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
}

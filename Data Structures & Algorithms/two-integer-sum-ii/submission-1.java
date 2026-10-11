class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        int[] res={};
        for(int i=0;i<numbers.length;i++){
            int need=target-numbers[i];
            if(mp.containsKey(need)){
               int[] r={mp.get(need)+1,i+1};
                return r;
            }
            mp.put(numbers[i],i);
        }
        return res;
    }
}

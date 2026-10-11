class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashSet<Integer>s=new HashSet<>();
        int[] res={};
        for(int i=0;i<numbers.length;i++){
            int need=target-numbers[i];
            if(s.contains(need)){
               int[] r={need,numbers[i]};
                return r;
            }
            s.add(numbers[i]);
        }
        return res;
    }
}

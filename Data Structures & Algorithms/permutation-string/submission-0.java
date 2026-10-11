class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length() > s2.length()){
            return false;
        }
        int[] freq1=new int[26];
        for(int i=0;i<s1.length();i++){
            int ind=s1.charAt(i)-'a';
            freq1[ind]++;
        }
        int l=0;
        int s=s2.length();
        int[] freq2=new int[26];
        for(int r=0;r<s2.length();r++){
            if(freq1[s2.charAt(r)-'a']!=0){
                freq2[s2.charAt(r)-'a']++;
            }
            if(r-l+1==s){
                if(Arrays.equals(freq1,freq2)){
                    return true;
                }
                l++;
            }
        }
        return false;
    }
}

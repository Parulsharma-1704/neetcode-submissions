class Solution {
    public int scoreOfString(String s) {
        int score=0;
        for(int i=1;i<s.length();i++){
            int v1=s.charAt(i-1);
            int v2=s.charAt(i);
            score+=Math.abs(v2-v1);
        }
        return score;
    }
}
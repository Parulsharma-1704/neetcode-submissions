class Solution {
    public int lengthOfLastWord(String s) {
        String word="";
        int n=s.length();
        int ans=0;
        boolean found=false;

        for(int i=n-1;i>=0;i--){
            if(i-1>=0 && s.charAt(i)!=' ' && s.charAt(i-1)!=' '){
                word+=s.charAt(i);
            }
            else if(i-1>=0 && s.charAt(i)!=' ' && s.charAt(i-1)==' '){
                ans=word.length();
                found=true;
            }
            if(found){
                break;
            }
        }
        return ans+1;
    }
}
class Solution {
    public int lengthOfLastWord(String s) {
        String word="";
        int n=s.length();
        int ans=0;
        boolean found=false;

        for(int i=n-1;i>=0;i--){
            if(s.charAt(i)!=' ' && s.charAt(i-1)!=' '){
                word+=s.charAt(i);
            }
            else if(s.charAt(i)!=' ' && s.charAt(i-1)==' '){
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
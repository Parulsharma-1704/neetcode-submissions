class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0;
        int maxV=0;
        int freq=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            freq=max(freq,mp[s[r]]);
            while((r-l+1)>freq && ((r-l+1)-freq)>k){
                mp[s[l]]--;
                l++;
                freq=max(freq,mp[s[r]]);
            }
            maxV=max(maxV,r-l+1);
        }
        return maxV;
    }
};

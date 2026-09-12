class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()){
            return "";
        }
        unordered_map<char,int>need,window;
        for(char ch : t){
            need[ch]++;
        }
        int have=0,needC=0;
        needC=need.size();

        int l=0;
        int start=-1;
        int minL=INT_MAX;

        for(int r=0;r<s.size();r++){
            int c=s[r];
            window[c]++;
            if(need.count(c) && window[c]==need[c]){
                have++;
            }
            while(have==needC){
                if(r-l+1 < minL){
                    minL=r-l+1;
                    start=l;
                }
                char ch=s[l];
                if(window[ch]==need[ch]){
                    have--;
                }
                window[ch]--;
                if(window[ch]==0){
                    window.erase(ch);
                }
                l++;
            }
        }
        if(minL==INT_MAX){
            return "";
        }
        return s.substr(start,minL);
    }
};

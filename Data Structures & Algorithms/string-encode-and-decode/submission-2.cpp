class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string temp=strs[0];
        for(int i=1;i<strs.size();i++){
            temp+="#" + strs[i];
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        if(s.empty()){
            return {""};
        }
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                ans.push_back(temp);
                temp="";
                continue;
            }
            temp+=s[i];
        }
        ans.push_back(temp);
        // ans.push_back(s);
        return ans;
    }
};

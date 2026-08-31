class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int x : nums){
            freq[x]++;
        }
        priority_queue<pair<int,int>>maxHeap;
        for(auto p : freq){
            maxHeap.push({p.second,p.first});
        }
        vector<int>ans;
        while(k){
            auto val=maxHeap.top();
            maxHeap.pop();
            ans.push_back(val.second);
            k--;
        }
        return ans;
    }
};

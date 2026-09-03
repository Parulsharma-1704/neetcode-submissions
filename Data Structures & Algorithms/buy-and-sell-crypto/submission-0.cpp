class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minV=INT_MAX;
        int maxA=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minV){
                minV=prices[i];
            }
            else{
                maxA=max(maxA,prices[i]-minV);
            }
        }
        return maxA;
    }
};

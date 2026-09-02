class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;

        int maxW=0;

        while(l<r){
            if(heights[l]<=heights[r]){
                int w=r-l;
                int h=heights[l];
                maxW=max(maxW,h*w);
                l++;
            }
            else{
                int w=r-l;
                int h=heights[r];
                maxW=max(maxW,h*w);
                r--;
            }
        }
        return maxW;
    }
};

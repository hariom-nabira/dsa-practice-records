class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), ans=0;
        vector<int> maxFromLeft(n) , maxFromRight(n);
        maxFromLeft[0] = height[0];
        maxFromRight[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            maxFromLeft[i] = max(maxFromLeft[i-1], height[i]);
        }
        for(int i=n-2;i>=0;i--){
            maxFromRight[i] = max(maxFromRight[i+1], height[i]);
        }
        for(int i=1;i<n-1;i++){
            int val = min(maxFromLeft[i-1], maxFromRight[i+1]) - height[i];
            if(val>0)
                ans+=val;
        }
        return ans;
    }
};
// Title: Trapping Rain Water

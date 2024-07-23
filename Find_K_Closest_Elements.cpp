class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int> ans;
        int right = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        int left = right-1;
        for(int c=0;c<k;c++){
            int tempR=INT_MAX;
            int tempL=INT_MAX;
            if(right<n) tempR = arr[right] - x;
            if(left>=0) tempL = x - arr[left];
            if(tempL<=tempR){
                ans.push_back(arr[left]);
                left--;
            }else{
                ans.push_back(arr[right]);
                right++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
// Title: Find K Closest Elements

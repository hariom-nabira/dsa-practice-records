class Solution {
private:
    void add(priority_queue<int> &q, int val, int k){
        if(q.size() < k || q.top() > val){
            q.push(val);
            if(q.size()>k){
                q.pop();
            }
        }
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> maxHeap;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                add(maxHeap,abs(nums[i]-nums[j]), k);
                add(maxHeap,abs(nums[i]-nums[j]), k);
            }
        }
        return maxHeap.top();
    }
};
// Title: Find K-th Smallest Pair Distance

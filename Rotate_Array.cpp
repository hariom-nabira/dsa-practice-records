class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp1,temp2, n=nums.size(),count=0,i=0,startIndex=0;
        if(!k || k==n) return;
        // temp1 = nums[i];
        while(count!=n){
            if(i==startIndex){
                startIndex = i = (i+1)%n;
                temp1=nums[i];
            }
            temp2=temp1;
            temp1=nums[(i+k)%n];
            nums[(i+k)%n]=temp2;
            count++;
            i=(i+k)%n;
        }
    }
};
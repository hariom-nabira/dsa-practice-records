class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp1,temp2, n=nums.size(),count=0,i=0;
        temp1 = nums[i];
        while(count!=n){
            temp2=temp1;
            temp1=nums[(i+k)%n];
            nums[(i+k)%n]=temp2;
            count++;
            i=(i+k)%n;
            if(n%k==0 && count%2==0){
                i++;
                temp1=nums[i];
            }
        }
    }
};
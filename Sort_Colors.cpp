class Solution {
public:
    void swap(int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums) {
        int l=0,r = nums.size()-1,i=0;
        while(i<=r){
            if(nums[i] == 0){
                swap(nums[l],nums[i]);
                l++;
                i++;
            }else if(nums[i] == 2){
                swap(nums[r],nums[i]);
                r--;
            }else{
                i++;
            }
        }
    }
};
// Title: Sort Colors

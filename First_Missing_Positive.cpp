//copied for streak

#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(INT_MIN);//make index easier handling
        for(int i=0; i<=n; i++){
            while( 0<nums[i] && nums[i]<=n // x in [1, n]
            && nums[i]!=nums[nums[i]]) //not in the right place  
                swap(nums[i], nums[nums[i]]); //sort by swap
        }
        for (int i=1; i<=n; i++)
            if (nums[i]!=i) return i;
        return n+1;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[1]<1 || nums[i]>n)
//                 nums[i] = n+1;
//         }
//         for(int i=0;i<n;i++){
//             int absn = abs(nums[i]);
//             if(absn > n)
//                 continue;
//             else if(nums[absn-1] > 0)
//                 nums[absn-1] = -1 * nums[absn-1];
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i] >= 0)
//                 return i+1;
//         }
//         return n+1;
//     }
// };
class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans=0;
        // sort(nums1.begin(),nums1.end(), greater<int>());
        // sort(nums2.begin(),nums2.end());
        // for(int i=0;i<nums1.size();i++){
        //     if(nums1[i] < (1LL*nums2[0]*k))
        //         break;
        //     int count=1;
        //     while(i<nums1.size()-1 && nums1[i+1]==nums1[i]){
        //         count++;
        //         i++;
        //     }
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i] < (1LL*nums2[j]*k))
        //             break;
        //         if(nums1[i] % (1LL*nums2[j]*k) ==0) ans+=count;
        //     }
        // }
        map<int,int> mp1, mp2;
        for(auto &ele : nums1) mp1[ele]++;
        for(auto &ele : nums2) mp2[ele]++;
        for(auto itr=mp1.rbegin(); itr!= mp1.rend(); itr++){
            if((*itr).first < (1LL*nums2[0]*k))
                    break;
            for(auto itr2=mp2.begin(); itr2!=mp2.end();itr2++){
                if((*itr).first < (1LL* (*itr2).first *k))
                    break;
                if((*itr).first%(1LL* (*itr2).first *k)==0) ans+= ((*itr).second * (*itr2).second);
            }
        }
        return ans;
    }
};
// Title: Find the Number of Good Pairs II

class Solution {
public:
    vector<int> primes = SieveOfEratosthenes(1e6);
    vector<int> SieveOfEratosthenes(int n){
        vector<bool> prime(n + 1, true);
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        vector<int> ans;
        for (int p = 2; p <= n; p++)
            if (prime[p])
                ans.push_back(p);
        return ans;
    }
    int performOp(int x){
        for(int i=0;primes[i]<=x;i++){
            if(x%primes[i]==0){
                return primes[i];
            }
        }
        return -1;
    }
    int minOperations(vector<int>& nums) {
        
        // for(auto &e:primes){
        //     cout<<e<<" ";
        // }
        // cout<<"\n";
        int n = nums.size(), ans=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i] > nums[i+1]){
                int temp = performOp(nums[i]);
                if(temp <= nums[i+1]){
                    ans++;
                    nums[i] = temp;
                }else{
                    return -1;
                }
            }
        }
        return ans;
    }
};
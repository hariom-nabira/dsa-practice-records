class Solution {
public:
    vector<int> SieveOfEratosthenes(int n){
        vector<bool> prime(n + 1, true);
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        vector<int> primes;
        for (int p = 2; p <= n; p++)
            if (prime[p])
                primes.push_back(p);
        return primes;
    }
    int performOp(int x, vector<int> &primes){
        for(int i=0;primes[i]<=x;i++){
            if(x%primes[i]==0){
                return primes[i];
            }
        }
        return -1;
    }
    int minOperations(vector<int>& nums) {
        vector<int> primes = SieveOfEratosthenes(1e6);
        int n = nums.size(), ans=0;
        for(int i=n-2;i>=0;i--){
            int temp = performOp(nums[i],primes);
            if(nums[i]>nums[i+1]){
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
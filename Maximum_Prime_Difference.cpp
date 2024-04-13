class Solution {
public:
    
    unordered_set<int> SieveOfEratosthenes(int n){
        unordered_set<int> primes;
        vector<bool> prime(n+1, true);

        for (int p = 2; p*p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p*p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int p = 2; p <= n; p++)
            if (prime[p])
                primes.insert(p);
        return primes;
    }
    
    int maximumPrimeDifference(vector<int>& nums) {
        unordered_set<int> primes;
        primes = SieveOfEratosthenes(100);
        int left=0,right=nums.size()-1;
        while(!primes.count(nums[left])) left++;
        while(!primes.count(nums[right])) right--;
        return right-left;
    }
};
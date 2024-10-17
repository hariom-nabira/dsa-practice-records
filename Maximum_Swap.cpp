class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;
        vector<int> digits;
        while(num>0){
            digits.push_back(num%10);
            num/=10;
        }
        int n = digits.size();
        vector<int> preMax(n);
        preMax[0] = digits[0];
        for(int i=1;i<n;i++){
            preMax[i] = max(digits[i],preMax[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(preMax[i]>digits[i]){
                int j = 0;
                while(j<i && digits[j]!=preMax[i]){
                    j++;
                }
                ans -= digits[i] * pow(10,i);
                ans -= digits[j] * pow(10,j);
                ans += digits[i] * pow(10,j);
                ans += digits[j] * pow(10,i);
                break;
            }
        }
        return ans;
    }
};
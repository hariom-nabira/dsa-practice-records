//binary search on answer

class Solution {
public:
    long long helper(long long T, int w){
        // w.x^2 + w.x - 2.T <= 0
        double discriminant = (w * w) + (8 * w * T);
        double x = (-w + sqrt(discriminant)) / (2 * w);
        long long max_x = static_cast<long long>(x);
        while (w * max_x * (max_x + 1) / 2 > T) {
            max_x--;
        }
        return max_x;
    }

    bool canReduceHeight(int mountainHeight, vector<int>& workerTimes, long long T) {
        long long totalReduction = 0;
        for (int time : workerTimes) {
            long long x = helper(T,time);
            totalReduction += x;
            if (totalReduction >= mountainHeight) {
                return true;
            }
        }        
        return totalReduction >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long left = 1;
        long long right = *max_element(workerTimes.begin(), workerTimes.end()) * (mountainHeight * (mountainHeight+1)) /2;
        long long answer = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;        
            if (canReduceHeight(mountainHeight, workerTimes, mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }    
        return answer;
    }
};
// Title: Minimum Number of Seconds to Make Mountain Height Zero

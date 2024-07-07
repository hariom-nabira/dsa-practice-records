class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles, emptyBottles = numBottles;
        while(emptyBottles/numExchange){
            ans += emptyBottles/numExchange;
            emptyBottles =  emptyBottles/numExchange + emptyBottles%numExchange;
        }
        return ans;
    }
};
// Title: Water Bottles

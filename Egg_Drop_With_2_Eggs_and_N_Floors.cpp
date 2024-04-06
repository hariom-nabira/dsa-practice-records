class Solution {
public:
    int twoEggDrop(int n) {
        int start = n,count=1,gap=1;
        while(start-gap > 0){
            count++;
            start = start-gap;
            gap++;
        }
        return count;
    }
};
// Title: Egg Drop With 2 Eggs and N Floors

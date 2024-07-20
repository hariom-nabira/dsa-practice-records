class Solution {
public:
    int findTheWinner(int n, int k) {
        int index=0;  //when size=1, winner is at index=0
        for(int size=2;size<=n;size++){
            // the key logic here is that 
            // the round with x players eliminates 1 player and leads to a round with x-1 players
            // observe that the new indices of these x-1 players gets shifed by -k (%x)
            // building upwards from size: 1 to n
            //we start with ansIndex=0 and with every step up we shift index by +k(%currSize)
            index = (index+k)%size;
        }
        return index + 1;
    }
};
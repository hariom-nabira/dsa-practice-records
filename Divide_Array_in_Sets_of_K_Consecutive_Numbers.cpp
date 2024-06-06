class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int> freq;
        for(auto &ele:hand) freq[ele]++;
        while(!freq.empty()){
            int start = freq.begin()->first;
            int need = freq.begin()->second;
            for(int i=0; i<groupSize;i++){
                if(freq[start+i] < need) return false;
                freq[start+i] -= need;
                if(freq[start+i]==0) freq.erase(start+i);
            }
            freq.erase(start);
        }
        return true;
    }
};
// Title: Divide Array in Sets of K Consecutive Numbers

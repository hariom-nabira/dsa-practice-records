class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
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
// Title: Hand of Straights

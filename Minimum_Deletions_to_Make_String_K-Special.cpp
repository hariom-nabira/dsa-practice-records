class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26);
        for(auto ch:word)
                freq[ch-'a']++;
        map<int,int> mp;
        for(auto ele:freq)
                mp[ele]++;
        return helper(mp,k);
    }
    int helper(map<int,int> &mp,int k){
        if(mp.size()==1){
            return 0;
        }
        auto it = mp.begin();
        int k1 = it->first*it->second;
        
        map<int,int> mp2 = mp;
        auto it2 = mp2.end();
        it2--;
        int k2 = (it2->first - (it->first+k))*it2->second;
        
        int temp = it2->second;
        mp2.erase(it2);
        mp2.insert({it->first + k,temp});
        mp.erase(it);
        
        return min(k1+helper(mp,k) , k2+helper(mp2,k));
    }
};
// Title: Minimum Deletions to Make String K-Special

class Solution {
public:
    bool check(unordered_map<char,int> &temp, unordered_map<char,int> &req){
        for(auto pair : req){
            if(pair.second > temp[pair.first])
                return false;
        }return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int> req,temp;
        for(char ch:t)
            req[ch]++;
        int start=0,end=-1,minStart=-1,minEnd=-1,minLength=INT_MAX,n=s.size();
        do{
            if(check(temp,req)){
                if(end-start+1 < minLength){
                    minStart=start;
                    minEnd=end;
                    minLength = end-start+1;
                }
                temp[s[start]]--;
                start++;
            }else{
                if(end >= n-1){
                    break;
                }
                else{
                    end++;
                    temp[s[end]]++;
                } 
            }
        }while(start<=end);
        
        if(minStart==-1) return "";
        return s.substr(minStart, minEnd-minStart+1);
    }
};
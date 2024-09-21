class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        set<string> banned(bannedWords.begin(),bannedWords.end());
        int ans=0, n=message.size();
        for(int i=0;i<n;i++){
            if(banned.find(message[i])!=banned.end()){
                ans++;
            }
            if(ans>=2) break;
        }
        if(ans>=2)
            return true;
        else
            return false;
    }
};
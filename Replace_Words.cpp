class Solution {
public:
    vector<string> split(string sentence, char delimiter){
        stringstream ss(sentence);
        string token;
        vector<string> res;
        while(getline(ss,token,delimiter))
            res.push_back(token);
        return res;
    }

    string shortestRoot(string word, unordered_set<string> dict){
        for(int len=1; len <= word.size(); len++){
            string prefix = word.substr(0,len);
            if(dict.contains(prefix))
                return prefix;
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        vector<string> words = split(sentence,' ');
        string ans;
        for(auto &str:words){
            ans += shortestRoot(str,dict) + ' ';
        }
        ans.pop_back();
        return ans;
    }
};
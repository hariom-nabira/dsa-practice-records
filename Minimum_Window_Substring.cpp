class Solution {
public:
    bool check(unordered_map<char,int> &temp, unordered_map<char,int> &req){
        for(auto pair : req){
            if(pair.second > temp[pair.first])
                return false;
        }return true;
    }
    void printMap(unordered_map<char,int> map){
        for(auto p:map){
            cout<<p.first<<" : "<<p.second<<endl;
        }
    }
    string minWindow(string s, string t) {
        unordered_map<char,int> req,temp;
        for(char ch:t)
            req[ch]++;
        printMap(req);
        cout<<endl<<endl;
        int start=0,end=-1,minStart=-1,minEnd=-1,minLength=INT_MAX,n=s.size();
        do{
            cout<<start<<" "<<end<<endl;
            printMap(temp);
            cout<<endl;
            if(check(temp,req)){
                cout<<"entered true\n";
                if(end-start+1 < minLength){
                    cout<<"true\n";
                    minStart=start;
                    minEnd=end;
                    minLength = end-start+1;
                    cout<<"updated minLength : "<<minLength<<endl;
                }
                // if(req.find(s[start])!=req.end())
                    temp[s[start]]--;
                start++;
            }else{
                if(end >= n-1){
                    cout<<"end : "<<end<<" s.size(): "<<s.size()<<" ";
                    cout<<"entered false true\n";
                    break;
                }
                else{
                    cout<<"entered false false\n";
                    end++;
                    // if(req.find(s[end])!=req.end())
                        temp[s[end]]++;
                } 
            }
        }while(start<=end);
        if(minStart==-1) return "";
        return s.substr(minStart, minEnd-minStart+1);
    }
};
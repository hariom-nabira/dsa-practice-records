class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(auto &str:commands){
            if(str[0]=='R')j++;
            else if(str[0]=='L')j--;
            else if(str[0]=='U')i--;
            else if(str[0]=='D')i++;
        }
        return (i*n)+j;
    }
};
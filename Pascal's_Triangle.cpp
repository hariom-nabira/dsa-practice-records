class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vout;
        vector<int> v;
        vout.push_back(v);
        vout[0].push_back(1);
        for(int i=1;i<numRows;i++){
            vector<int> v;
            vout.push_back(v);
            int val=0;
            for(int j=0;j<=i;j++){
                if(j==0)
                    val=vout[i-1][j];
                else if(j==i)
                    val=vout[i-1][j-1];
                else
                    val=vout[i-1][j] + vout[i-1][j-1];
                vout[i].push_back(val);
            }
        }
        return vout;
    }
};
// Title: Pascal's Triangle

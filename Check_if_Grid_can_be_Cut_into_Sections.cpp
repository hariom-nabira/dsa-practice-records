class Solution {
public:
    static bool mySortX(vector<int> &a, vector<int> &b) {
        if(a[0]==b[0]) return a[2]<b[2];
        return a[0] < b[0];
    }
    static bool mySortY(vector<int> &a, vector<int> &b) {
        if(a[1]==b[1]) return a[3]<b[3];
        return a[1] < b[1];
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        int count=0;
        sort(rectangles.begin(), rectangles.end(), mySortX);
        for(int i=1; i<(int) rectangles.size(); i++){
            if(rectangles[i][0] >= rectangles[i-1][2]) count++;
        }
        if(count>=2) return true;

        count=0;
        sort(rectangles.begin(), rectangles.end(), mySortY);
        for(int i=1; i<(int) rectangles.size(); i++){
            if(rectangles[i][1] >= rectangles[i-1][3]) count++;
        }
        if(count>=2) return true;
        return false;
    }
};
// Title: Check if Grid can be Cut into Sections

class Solution {
public:
    static bool myComp(vector<int> &r1,vector<int> &r2){
        return r1[1] > r2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(), myComp);
        int boxes=0,i=0,maxUnits=0;
        while(boxes < truckSize && i<boxTypes.size()){
            if(boxes + boxTypes[i][0] <= truckSize){
                boxes+=boxTypes[i][0];
                maxUnits+=boxTypes[i][1]*boxTypes[i][0];
            }else{
                maxUnits+=(truckSize - boxes)*boxTypes[i][1];
                boxes=truckSize;
            }i++;
        }
        return maxUnits;
    }
};
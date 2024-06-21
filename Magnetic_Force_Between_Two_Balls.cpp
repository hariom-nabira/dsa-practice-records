class Solution {
public:
    bool check(vector<int>& position, int m, int dist){
        int i=1, limit=position[0]+dist, n=position.size();
        for(int b=2;b<=m;b++){
            while(i<n && position[i]<limit){
                i++;
            }
            if(i==n) return false;
            limit = position[i]+dist;
        }
        return true;
    }

    int maxDistance(vector<int>& position, int m) {
        //lets realise that the answer lies in a range that forms a monotonic function
        //i.e if balls can be placed with min dist x, it can be placed with min dist y < x
        //and if balls cant be placed with min dist x, then it cant be placed with min dist y > x
        //so the range becomes : T T T T ... T T T F F F ... F F F F 
        //and so the question is to find the last T
        // also: the max answer can be 1e9 (NOT n)

        // Therefore : Binary search on answer!!!
        sort(position.begin(),position.end());
        int left=0, right = 1e9 ,ans = 0;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(check(position,m,mid)){
                ans = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
};
// Title: Magnetic Force Between Two Balls

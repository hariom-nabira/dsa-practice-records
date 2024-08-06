class Solution {
public:
    bool canMeasureWater(int a, int b, int target) {
        if(target > a+b) return false;
        // if(target % gcd(a,b) == 0) return true;
        set<pair<int,int>> seen;
        queue<pair<int,int>> q;
        q.push({0,0});
        seen.insert({0,0});
        pair<int,int> temp;
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            vector<pair<int,int>> nextOptions = {
                fillA(curr,a,b),
                fillB(curr,a,b),
                emptyA(curr,a,b),
                emptyB(curr,a,b),
                aTob(curr,a,b),
                bToa(curr,a,b),
            };
            for(auto temp : nextOptions){
                if(temp.first + temp.second == target) return true;
                if(!seen.contains(temp)){
                    q.push(temp);
                    seen.insert(temp);
                }
            }
        }
        return false;
    }
    pair<int,int> fillA(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {a,y};
    }
    pair<int,int> fillB(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {x,b};
    }
    pair<int,int> emptyA(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {0,y};
    }
    pair<int,int> emptyB(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {x,0};
    }
    pair<int,int> aTob(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        if(b-y >= x) return {0,x+y};
        else return {x-b+y , b};
    }
    pair<int,int> bToa(pair<int,int> &curr, int a, int b){
        int x = curr.first, y = curr.second;
        if(a-x >= y) return {x+y,0};
        else return {a, y-a+x};
    }
};
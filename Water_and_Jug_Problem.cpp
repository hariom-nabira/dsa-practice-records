class Solution {
public:
    bool canMeasureWater(int a, int b, int target) {
        set<pair<int,int>> seen;
        queue<pair<int,int>> q;
        q.push({0,0});
        seen.insert({0,0});
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            pair<int,int> temp;
            temp = fillA(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
            temp = fillB(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
            temp = emptyA(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
            temp = emptyB(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
            temp = aTob(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
            temp = bToa(curr,a,b);
            if(temp.first==target || temp.second==target) return true;
            if(!seen.contains(temp)) q.push(temp);
        }
        return false;
    }
    pair<int,int> fillA(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {a,y};
    }
    pair<int,int> fillB(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {x,b};
    }
    pair<int,int> emptyA(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {0,y};
    }
    pair<int,int> emptyB(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        return {x,0};
    }
    pair<int,int> aTob(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        if(b-y >= x) return {0,x+y};
        else return {x-b+y , b};
    }
    pair<int,int> bToa(pair<int,int> curr, int a, int b){
        int x = curr.first, y = curr.second;
        if(a-x >= y) return {x+y,0};
        else return {a, y-a+x};
    }
};
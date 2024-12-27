// from solutions tab
// cleaner approach than mine


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for(int c : asteroids){
            bool exploded = 0;
            while(!result.empty() && c < 0 && result.back() > 0){
                if(abs(c) > result.back()) result.pop_back();
                else if(abs(c) == result.back()){
                    exploded = 1;
                    result.pop_back();
                    break;
                }
                else{
                    exploded = 1;
                    break;
                }
            }
            if(!exploded){
                result.push_back(c);
            }
        }
        return result;
    }
};
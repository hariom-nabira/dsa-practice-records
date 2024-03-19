class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });

        int arrows = 1;
        int end = points[0][1];

        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1];
            }
            //else
            //     end = min(end, points[i][1]);
        }

        return arrows;
    }
};
// Title: Minimum Number of Arrows to Burst Balloons

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int mincost[n];
        mincost[0] = cost[0];
        mincost[1] = cost[1];

        for(int i = 2;i<n;i++){
            mincost[i] = min(mincost[i-1],mincost[i-2]) + cost[i];
        }

        return min(mincost[n-1],mincost[n-2]);
    }
};

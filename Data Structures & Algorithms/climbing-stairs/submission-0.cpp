class Solution {
public:
    int climbStairs(int n) {
        int mem[46]{0};
        mem[1] = 1;
        mem[2] = 2;


        for(int i = 3;i<46; i++){
            mem[i] = mem[i-2] + mem[i-1];
            
        }
        return mem[n];
    }
};

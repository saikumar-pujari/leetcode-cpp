class Solution {
public:
    int climbStairs(int n) {
         int first = 1, second = 1;  // Base case for step 0 and 1

        for (int i = 2; i <= n; i++) {
            int current = first + second;  // Number of ways to reach step i
            first = second;  // Move second to first
            second = current;  // Move current to second
        }

        return second; 
    }
};
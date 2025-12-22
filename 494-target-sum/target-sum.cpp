class Solution {
private:
    int findways(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> prev(target + 1, 0), curr(target + 1, 0);

        // Base case
        if (nums[0] == 0) 
            prev[0] = 2;          // +0 and -0
        else 
            prev[0] = 1;

        if (nums[0] != 0 && nums[0] <= target)
            prev[nums[0]] = 1;

        for (int i = 1; i < n; i++) {
            for (int sum = 0; sum <= target; sum++) {
                int notTake = prev[sum];
                int take = 0;
                if (nums[i] <= sum)
                    take = prev[sum - nums[i]];

                curr[sum] = notTake + take;
            }
            prev = curr;
            fill(curr.begin(), curr.end(), 0);
        }
        return prev[target];
    }

    int countpart(int d, vector<int>& arr) {
        int totalSum = 0;
        for (int x : arr) totalSum += x;

        if (totalSum < abs(d) || (totalSum + d) % 2 != 0)
            return 0;

        int target = (totalSum + d) / 2;
        return findways(arr, target);
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return countpart(target, nums);
    }
};

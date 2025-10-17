class Solution {
private:
    bool f(int n, int k, vector<int>& nums) {
        vector<bool> prev(k + 1, false), curr(k + 1, false);
        prev[0] = true;

        if (nums[0] <= k) prev[nums[0]] = true;

        for (int ind = 1; ind < n; ind++) {
            curr[0] = true; // always possible to make 0 sum
            for (int target = 1; target <= k; target++) {
                bool notTake = prev[target];
                bool take = false;
                if (nums[ind] <= target)
                    take = prev[target - nums[ind]];
                curr[target] = take || notTake;
            }
            prev = curr;
        }
        return prev[k];
    }

public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int num : nums) sum += num;
        if (sum % 2) return false;
        int target = sum / 2;
        return f(n, target, nums);
    }
};

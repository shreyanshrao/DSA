class Solution {
public:
   
    int robLinear(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;
        if(n == 1) return arr[0];

        int prev2 = arr[0];                  
        int prev1 = max(arr[0], arr[1]);     

        for(int i = 2; i < n; i++) {
            int curr = max(prev1, prev2 + arr[i]);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        
        vector<int> temp1(nums.begin() + 1, nums.end());

        
        vector<int> temp2(nums.begin(), nums.end() - 1);

        
        return max(robLinear(temp1), robLinear(temp2));
    }
};


















        // dp[0]=nums[0];
        // dp[1]=max(nums[0],nums[1]);
        // if(nums[0]>nums[1]){
        // for(int i=1;i<n-1;i++){
        //     dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        //     sum1+=dp[i];
        // }
        // }
        // else if(nums[1]>nums[0]){
        //     for(int i=2;i<n;i++){
        //         dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        //         sum2+=dp[i];
        //     }
        // }
        // return max(sum1,sum2);
//     }
// };
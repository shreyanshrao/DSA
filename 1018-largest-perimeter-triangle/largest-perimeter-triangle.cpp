class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        if(n<3 ) return 0;
        for(int i=n-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2])
            
            ans=max(ans,nums[i]+nums[i-1]+nums[i-2]);
        }
       return ans;
    }
};
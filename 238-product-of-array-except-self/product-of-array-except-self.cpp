class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int prod1=1;

        // for(int num:nums){
        //     prod*=num;
        // }
        vector<int>ans(n,1);
        for(int i=0;i<n;i++){
            ans[i]=prod;
            prod*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=prod1;
            prod1*=nums[i];
        }
      
        return ans;
    }
};
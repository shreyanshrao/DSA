class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int p;
        vector<int>ans;
        for(int i=0;i<n;i++){
            p=nums[i]*nums[i];
            ans.push_back(p);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
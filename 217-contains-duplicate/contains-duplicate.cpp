class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>=2) return true;
            
        }
        return false;
    }
};
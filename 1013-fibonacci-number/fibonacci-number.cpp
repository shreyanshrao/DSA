class Solution {
private:
int possible(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=possible(n-1,dp)+possible(n-2,dp);
    // if(n<=1) return n;
    // int last=possible(n-1);
    // int slast=possible(n-2);
    // return last+slast;

}
public:
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return possible(n,dp);
    }
};
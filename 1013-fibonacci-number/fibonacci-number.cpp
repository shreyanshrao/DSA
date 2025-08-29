class Solution {
private:
int possible(int n,vector<int>&dp){
    if(n<=1) return n;
    dp[0]=0;
    dp[1]=1;
    // if(dp[n]!=-1) return dp[n];
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
     return dp[n];
    // if(n<=1) return n;
    // int last=possible(n-1);
    // int slast=possible(n-2);
    // return last+slast;

}
public:
    int fib(int n) {
        vector<int>dp(n+1);
        return possible(n,dp);
    }
};
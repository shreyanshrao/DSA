class Solution {
    private:
    long long dp[101][101];
    int function(int i,int j,int m,int n,vector<vector<int>>&obstacleGrid){
        if(i==m-1 && j==n-1) return obstacleGrid[i][j] == 0 ? 1 : 0;
        if(i>=m||j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(obstacleGrid[i][j]==1) return dp[i][j]=0;
        return dp[i][j]=function(i+1,j,m,n,obstacleGrid)+function(i,j+1,m,n,obstacleGrid);
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return function(0,0,m,n,obstacleGrid);
    }
};
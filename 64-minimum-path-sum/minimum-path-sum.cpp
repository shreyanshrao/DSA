class Solution {
long long dp[201][201];
private:
int solution(int i,int j,int m,int n,vector<vector<int>>& grid){
    if(i==m-1&&j==n-1) return grid[i][j];

    if(i>=m||j>=n) return INT_MAX;

    if(dp[i][j]!=-1) return dp[i][j];

    int right=solution(i+1,j,m,n,grid);
    int left=solution(i,j+1,m,n,grid);
    // dp[i][j]=grid[i][j]+min(solution(i+1,j,m,n,grid),solution(i,j+1,m,n,grid));
    dp[i][j]=grid[i][j]+min(right,left);
    return dp[i][j];
}
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solution(0,0,m,n,grid);
    }
};
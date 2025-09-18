class Solution {
    vector<vector<int>>dp;
    private:
    int solution(int i,int j,int m,int n,vector<vector<int>>& matrix){

         if(i>=m||j>=n||j<0) return INT_MAX;
         
        if(i==m-1) return matrix[i][j];

       
        if(dp[i][j]!=1e9) return dp[i][j];

        // int left=solution(i,j,m,n,matrix);
        int right=solution(i+1,j-1,m,n,matrix);
        int rightd=solution(i+1,j,m,n,matrix);
        int leftd=solution(i+1,j+1,m,n,matrix);

        dp[i][j]=min({right,rightd,leftd})+matrix[i][j];
        return dp[i][j];


    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        dp.assign(m, vector<int>(n, 1e9));
        

        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            ans=min(ans,solution(0,j,m,n,matrix));
        }
        return ans;
    }
};
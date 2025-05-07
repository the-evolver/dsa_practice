class Solution 
{
    public int cherryPickup(int[][] grid) 
    {
        int m=grid.length,n=grid[0].length;

        int[][][] dp = new int[m][n][m];
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) for(int k=0;k<m;k++) dp[i][j][k]=-1;
        int res = helper(grid,m-1,n-1,m-1,n-1,m,n,dp);
        return Math.max(0,res);
    }
    public int helper(int[][] g,int i1,int i2,int j1,int j2,int r,int c,int[][][] dp)
    {
        if(i1<0 || i2<0 || j1<0 || j2<0 || g[i1][j1]==-1 || g[i2][j2]==-1) return Integer.MIN_VALUE;
        if(i1==0 && j1==0) return g[i1][j1];

        if(dp[i1][j1][i2]!=-1) return dp[i1][j1][i2];

        int cherry = 0;
        if(i1==i2 && j1==j2) cherry = g[i1][j1];
        else cherry =g[i1][j1]+g[i2][j2];

        int f1 = helper(g,i1,i2-1,j1-1,j2,r,c,dp);
        int f2 = helper(g,i1-1,i2,j1,j2-1,r,c,dp);
        int f3 = helper(g,i1,i2,j1-1,j2-1,r,c,dp);
        int f4 = helper(g,i1-1,i2-1,j1,j2,r,c,dp);

        cherry += Math.max(Math.max(f1,f2),Math.max(f3,f4));

        return dp[i1][j1][i2] = cherry;

    }
}
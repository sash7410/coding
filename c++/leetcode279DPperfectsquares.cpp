//https://leetcode.com/problems/perfect-squares/
//2d arraysoln
class Solution {
public:
    int numSquares(int n) {
      if(n<=3){
            return n;
        }
       int x=sqrt(n);
        x++;
       // int dp[x+1];
        //vector<int > dp(n+1, INT_MAX-1);
      // vector<int > dp1(n+1,0);
        int *dp=new int[n+1];
        int *dp1=new int[n+1];
        // int dp1[x+1];
         for(int j=0;j<n+1;j++){
            // dp.push_back(INT_MAX-1);
             //dp1.push_back(0);
             dp[j]=INT_MAX-1;
             dp1[j]=0;
         }
      
            dp[0]=0;
        
        for(int i=1;i<x+1;i++){
            for(int j=1;j<n+1;j++){
               if(i*i<=j){
                    dp1[j]=min(1+dp1[j-(i*i)],dp[j]);
                }
                else{
                    dp1[j]=dp[j];
                }
            }
            dp=dp1;
        }
         return dp1[n];
    }
};

//space optimized soln
class Solution {
public:
    int numSquares(int n) {
      if(n<=3){
            return n;
        }
       int x=sqrt(n);
        x++;
       // int dp[x+1];
        vector<int > dp,dp1;
        // int dp1[x+1];
         for(int j=0;j<n+1;j++){
             dp.push_back(INT_MAX-1);
             dp1.push_back(0);
         }
      
            dp[0]=0;
        
        for(int i=1;i<x+1;i++){
            for(int j=1;j<n+1;j++){
               if(i*i<=j){
                    dp1[j]=min(1+dp1[j-(i*i)],dp[j]);
                }
                else{
                    dp1[j]=dp[j];
                }
            }
            dp=dp1;
        }
         return dp1[n];
    }
};
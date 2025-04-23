//https://leetcode.com/problems/longest-palindromic-subsequence/
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1;
        s1=s;
        int dp[s.length()+1][s1.length()+1];
        reverse(s.begin(),s.end());
        //cout<<s<<endl;
        for(int i=0;i<s.length()+1;i++){
            for(int j=0;j<s1.length()+1;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
                else if(s[i-1]==s1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    
            }
        }
        return dp[s.length()][s1.length()];
        
    }
};
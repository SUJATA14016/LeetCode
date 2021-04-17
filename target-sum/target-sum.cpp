class Solution {
public:
    int findTargetSumWays(vector<int>& v, int target) {
        int i,sum=0,s=0;
        for(i=0;i<v.size();i++)
         sum+=v[i];
    s=(sum+target)/2;
        if((target+sum)%2!=0) return 0;
      return  subSum(v,s);
    
    }
    int subSum(vector<int>& v,int sum){
        
        int n=v.size();
        int dp[n+1][sum+1],i,j;
        for(i=0;i<=n;i++){
            dp[i][0]=1;
        }
            for(j=1;j<=sum;j++){
                dp[0][j]=0;
            }
        for(i=1;i<=n;i++){
            for(j=0;j<=sum;j++){
                if(v[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j-v[i-1]]+dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
            }       
    
};
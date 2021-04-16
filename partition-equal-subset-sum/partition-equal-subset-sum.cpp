class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
         int sum=0,i;
        for(auto &i:nums)
        sum+=i;
        
        if(sum%2!=0)
        return false;
        else{
           return  subSet(nums,sum/2);
        }
    }
    bool subSet(vector<int>&nums,int sum){
        int n=nums.size();
        bool dp[n+1][sum+1];
        int i,j;
        for(i=0;i<=n;i++ ){
            dp[i][0]=true;
        }
        for(j=1;j<=sum;j++)
         dp[0][j]=false;
         
         for(i=1;i<=n;i++){
             for(j=1;j<=sum;j++){
                 if(nums[i-1]>j){
                     dp[i][j]=dp[i-1][j];
                 }
               else{
                   dp[i][j]=(dp[i-1][j-nums[i-1]])||dp[i-1][j];
               }  
                 
             }
         }
         return dp[n][sum];
    
    }
};
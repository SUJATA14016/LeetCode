class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(auto i=nums.begin();i!=nums.end();i++){
            for(auto j=i+1;j!=nums.end();j++)
            {
                if(*i+*j==target){
                    v.push_back(i-nums.begin());
                    v.push_back(j-nums.begin());
                    
                }
                
            }
       
        }
        
   return v;      
    }
};
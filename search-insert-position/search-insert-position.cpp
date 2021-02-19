class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        for(auto it=v.begin();it!=v.end();it++){
            if(*it>=target){
                return (it-v.begin());
            }
            
            }
      return v.size();
        
    }
};
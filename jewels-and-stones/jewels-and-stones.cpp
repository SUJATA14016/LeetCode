class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i,j,count=0;
        for(i=0;jewels[i];i++){
            for(j=0;stones[j];j++){
                if(jewels[i]==stones[j])
                {count++;}
            }
        }
   return count;     
    }
};
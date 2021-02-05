class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0,i,j,len,b,area;
        i=0;
        j=height.size()-1;
        while(i<j)
        {
           len=j-i;
            b=min(height[i],height[j]);
            area=len*b;
            if(area>mx)
                mx=area;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        
  return mx;  }
};
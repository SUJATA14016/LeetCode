class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s;
        if(!strs.size()){return s;}
        s=strs[0];
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<strs[i].length();j++){
                if(s[j]!=strs[i][j]){
                    s=s.erase(j,s.length());
                    break;
                }
            }
        }
      return s;  
    }
};
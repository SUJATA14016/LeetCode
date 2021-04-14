class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char ,int> mp;
        int i=0,j,mx=0;
        if(s.length()==0){return 0;}
        for(j=0;j<s.length();j++){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                mx=max(mx,j-i+1);
            }
            else{
            while(mp.size()<j-i+1){
                mp[s[i]]--;
                if(mp[s[i]]==0){mp.erase(s[i]);}
                i++;
            }
            } 
            
        }
        
        return mx;
    }
};
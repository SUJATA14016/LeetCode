class Solution {
public:
    bool isAnagram(string s1, string s2) {
        int a[26]={0},i=0;
        if(s1.length()!=s2.length()){return false;}
        while(s1[i]&&s2[i]){
            ++a[s1[i]-'a'];
            --a[s2[i]-'a'];
            i++;
        }
        
        for( i=0;i<26;i++){
            if(a[i]!=0){return false;}
        }
            return true;
        
    }
};
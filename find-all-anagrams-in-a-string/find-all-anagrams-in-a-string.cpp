class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
      
         int k,i,j,m,arr1[26]={0};
        vector <int>v;
        	    k=pat.length();
        	    for(i=0;i<pat.length();i++){
        	        arr1[pat[i]-'a']++;
        	    }
        	    i=0;
        for(j=0;j<txt.length();j++){
             arr1[txt[j]-'a']--;
             if(j-i+1==k){
                 for( m=0;m<26;m++){
                     if(arr1[m]!=0)
                     break;
                 }
                 if(m==26){v.push_back(i);}
                 arr1[txt[i]-'a']++;
                 i++;
             }
        }
	 return v;
        
        
        
        
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n==0) return true;
        if(m==0) return false;
        string p="";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i]==t[j]){ 
                    
                p+=t[j];
                i++;
                }
                
                if(p.size()==s.size())
                return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(remove(s.begin(),s.end(),' '),s.end());
        // s.erase(remove(s.begin(),s.end(),','),s.end());
        string result="";
        for(char c:s){
            if(!ispunct(c))
            result+=c;
        }
        transform(result.begin(),result.end(),result.begin(),::tolower);
        int n=result.length();
        int l=0;
        int r=n-1;
        while(l<r){
            if(result[l]!=result[r]) return false;
            l++;
            r--;
        }
        
        return true;

    }
};
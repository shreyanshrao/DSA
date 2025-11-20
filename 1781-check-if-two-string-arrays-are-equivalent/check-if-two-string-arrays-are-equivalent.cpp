class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1="";
        for(auto &a:word1) result1+=a;
        string result2="";
        for(auto &b:word2) result2+=b;
        if(result1==result2) return true;
        else return false;
    }
};
class Solution {
public:
    int hIndex(vector<int>& cite) {
        sort(cite.begin(),cite.end());
        int n=cite.size();
        int h=0;
        int count=0;
        for(int i=n-1;i>=0;i--){
            
            if(cite[i]>=n-i){
                    h=n-i;

            }
            else{
                break;
            }
        }
        return h;
    }
};
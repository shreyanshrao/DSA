class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n=happiness.size();
        sort(happiness.begin(),happiness.end(),greater<int>());
        if(k==1) return happiness[0];
        long long sum=0;
        for(int i=0;i<k;i++){
            int reduced=happiness[i]-i;
            if(reduced>0)
            sum+=reduced;
            
        }
        
        return sum;

    }
};
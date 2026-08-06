class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum=0;
        int maxi=0;

        for(int x:gain){

            sum+=x;
            maxi=max(sum,maxi);
        }

        return maxi;
    }
};
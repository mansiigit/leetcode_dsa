class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        for(auto x:nums){
            if(x<first){
                first=x;
            }
            if(x>first && x<second){
                second=x;
            }
            if(x>second){
                return true;
            }
        }
        return false;
    }
};
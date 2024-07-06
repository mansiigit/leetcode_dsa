class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int z=0;
        int s=nums.size();
        if(s==0){
            return;
        }
        for(int i=0;i<s;i++){
            if(nums[i]>0 || nums[i]<0){
                ans.push_back(nums[i]);
            }
            else{
            z++;
            }

        }
        int j=0;
           while (z-- > 0) {
            ans.push_back(0);
        }

        nums= ans;

    }
};
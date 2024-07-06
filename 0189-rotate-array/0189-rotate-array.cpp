class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int size=nums.size();
        int l = size - (k % size);

         
        if(k==0){
            return;
        }
      
        for(int i=l;i<size;i++){
            ans.push_back(nums[i]);
        }
            for(int j=0;j<l;j++){
                ans.push_back(nums[j]);
            
        }
        nums= ans;
    }
};
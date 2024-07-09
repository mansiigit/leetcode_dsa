class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int ans=n;
    

 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            
            if(nums[j]<nums[i]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
       for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                ans = i;
                break;
            }
        }
        return ans;

    }


    
};
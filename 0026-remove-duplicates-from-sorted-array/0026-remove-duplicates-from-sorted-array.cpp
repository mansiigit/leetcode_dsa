class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int uniqueCount = 1;  // At least the first element is unique.

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[uniqueCount] = nums[i];
                ++uniqueCount;
            }
        }

        return uniqueCount;
    }
};

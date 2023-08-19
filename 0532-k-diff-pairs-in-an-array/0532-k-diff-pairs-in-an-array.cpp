class Solution {
public:
    int k_diff_BS(vector<int>& a, int start, int x) {
        int end = a.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (a[mid] == x) {
                return mid;
            } else if (a[mid] > x) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        set<pair<int, int>> ans;
        
        // Sort the input array to handle duplicates
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;  // Skip duplicates to ensure uniqueness
            }
            
            if (k_diff_BS(nums, i + 1, nums[i] + k) != -1) {
                ans.insert({nums[i], nums[i] + k});
            }
        }
        
        return ans.size();
    }
};

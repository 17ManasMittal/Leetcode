class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (nums[i] < 0 && nums[j] > 0) {
            if (abs(nums[i]) == abs(nums[j])) {
                return nums[j];
            } else if (abs(nums[i]) > abs(nums[j])) {
                ia++;
            } else {
                j--;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        int count = 0;
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] == k) {
                count++; 
                left++;  
                right--; 
            } else if (nums[left] + nums[right] < k) {
                left++;  
            } else {
                right--; 
            }
        }

        return count; 
    }
};

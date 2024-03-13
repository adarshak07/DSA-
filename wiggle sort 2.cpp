class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         int n = nums.size();
        // Sort the array
        std::sort(nums.begin(), nums.end());
        // Create a temporary array to store the sorted elements
        std::vector<int> temp(n);
        // Start filling the temporary array with elements in a wiggle manner
        int mid = (n + 1) / 2;
        int j = n;
        for (int i = 0; i < n; ++i) {
            temp[i] = i % 2 == 0 ? nums[--mid] : nums[--j];
        }
        // Copy the elements from the temporary array to the original array
        for (int i = 0; i < n; ++i) {
            nums[i] = temp[i];
        }
    
    }
};

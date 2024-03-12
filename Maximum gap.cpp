class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());

    int ans = 0;

    if(nums.size() == 0 ) return ans;

        for(int i=1;i<nums.size();i++) {
            if(nums[i] - nums[i-1] >= ans) {
                ans = nums[i] - nums[i-1];
            }
        }

        return ans;
    }
};

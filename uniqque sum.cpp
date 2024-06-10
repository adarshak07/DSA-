class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        mp[nums[i]]++;

        int totalSum = 0;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1)
            totalSum+=nums[i];
        }
        return totalSum;
    }
};

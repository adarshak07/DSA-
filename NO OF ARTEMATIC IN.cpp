class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i, idx=-1;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==1 && idx==-1)
            {
                idx = i;
            }
            else if(nums[i]==1 && (i-idx)<=k)
            {
                return false;
            }
            else if(nums[i]==1)
            {
                idx = i;
            }
        }
        return true;
    }
};

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        ios_base::sync_with_stdio(0),cout.tie(0),cin.tie(0);
        vector<vector<int>>use;
        int j,i,sz;
        for(i=0;i<nums.size();i++){
            sz=nums[i].size();
            for(j=0;j<sz;j++){
                if(i+j>=use.size())
                    use.push_back({});
                use[i+j].push_back(nums[i][j]);
            }
        }
        vector<int>ans;
        for(j=0;j<use.size();j++)
            for(i=(int)use[j].size()-1;i>=0;i--)
                ans.push_back(use[j][i]);
        return ans;
    }
};

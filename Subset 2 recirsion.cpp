  void helper(vector<int>&nums,int i,vector<vector<int>>& ans,vector<int>& sub) {


        if(i == nums.size()) { ans.push_back(sub);
        return;
        }
        //at each iterator we either pick or ignore the i the element 
        sub.push_back(nums[i]);
        helper(nums,i+1,ans,sub);

        //ignore , so remove last added element 

        sub.pop_back();
        while( i+1 < nums.size() && nums[i] == nums[i+1]) {
            i++;
        }
        helper(nums,i+1,ans,sub); 

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;

        sort(nums.begin(),nums.end());

        helper(nums,0,ans,sub);

        return ans;
    }
};

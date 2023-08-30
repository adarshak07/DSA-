vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> ans;
         
         sort(intervals.begin(),intervals.end());
         
         for(int i=0;i<intervals.size();i++) {
             if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                 ans.push_back(intervals[i]);  //new interval push kar idye ans me
             }
             else {
                 ans.back()[1] = max(ans.back()[1],intervals[i][1]);
             }
         }
         
         
         return ans;
    }

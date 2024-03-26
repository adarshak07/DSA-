class Solution {
public:

    static bool comp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>>v;
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end());
        
        reverse(v.begin(),v.end());
        
        stable_sort(v.begin(),v.end(),comp);
       
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].second;j++)
            {
                ans.push_back(v[i].first);
            }
        }
        return ans;
        
    }
};

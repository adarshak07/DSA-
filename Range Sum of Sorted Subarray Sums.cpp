class Solution {
public:
    const int M= 1e9+7;
    int rangeSum(vector<int>& nums, int n, int l, int r) {
        vector<int> sumsubarray;
        for (int i=0; i<n; i++){
            int k=0;
            for (int j=i; j<n; j++){
                k+= nums[j];
                sumsubarray.push_back(k);
            }
        }
        sort(sumsubarray.begin(),sumsubarray.end());
        int ans=0;
        for (int i=l-1; i<=r-1; i++){ans+= sumsubarray[i];ans= ans%M;}
        return ans;
    }
};

class Solution {
public:
   
    long long minimumRemoval(vector<int>& arr) {
        int n = arr.size();
        long long ans = LONG_MAX,left,right,op;
        sort(arr.begin(),arr.end());
        vector<long long> presum(n,0);
        presum[0] = arr[0];

        for(int i = 1;i<n;i++)
        presum[i] = presum[i-1]+arr[i];
        for(int i = 0;i<n;i++)
        {
            left = presum[i]-arr[i],right = presum[n-1]-presum[i];
            op = left+(right-arr[i]*(long long)(n-i-1));
            ans = min(ans,op);
        }
        return ans;       
    }
};

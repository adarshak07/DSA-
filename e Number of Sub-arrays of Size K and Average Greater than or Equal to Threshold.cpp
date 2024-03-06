class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0;
        int n=arr.size();
        int sum=0,count=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1 < k){
                
                j++;
            }else if(j-i+1 == k){
                
                int p=sum/k;

                if(p>=threshold){
                    count++;
                }
                sum-=arr[i];
                i++;j++;
            }
        }
        return count;
    }
};

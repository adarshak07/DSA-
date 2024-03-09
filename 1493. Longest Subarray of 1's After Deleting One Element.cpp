class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = 0, k=1;
        int i=0, j=0; 
        int countOfZero = 0;
        while(j<nums.size()){
            //Calculations
            if(nums[j] == 0) countOfZero++;
            // if(countOfZero < k) j++; ----> Because if countOfZero is less than k then also we are getting our ans
            if(countOfZero <= k){
                //ans from calculation
                mx = max(mx, j-i+1);
                j++;
            }
            else if(countOfZero > k){
                while(countOfZero > k){
                    //remove calculations for i
                    if(nums[i] == 0) countOfZero--;
                    i++;
                }
                j++;
            }
        }
        return mx-1;
    }
};

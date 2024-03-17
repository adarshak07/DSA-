class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp1; // Create a map to count the occurrences of elements in arr1
        vector<int> ans; // Initialize a vector to store the sorted result
        vector<int> remaining; // Initialize a vector to store the remaining elements

        // Step 1: Count the occurrences of each element in arr1
        for (int i = 0; i < arr1.size(); i++) {
            mp1[arr1[i]]++;
        }
//     for(int i=0;i<arr2.size();i++)
        //     {
        //          for(auto it:mp1)
        // {
        //         if(arr2[i]==it.first)
        //         {
        //             for(int j=0;j<it.second;j++)
        //             {
        //             ans.push_back(it.first);
                
        //             }

        //         }
        //     }
        //     mp1.erase(arr2[i]);
        // }

        // Or we can use 2 loop
        // Step 2: Process elements from arr2
        for (int i = 0; i < arr2.size(); i++) {
            // For each element in arr2, add it to 'ans' as many times as it appears in arr1
            for (int j = 0; j < mp1[arr2[i]]; j++) {
                ans.push_back(arr2[i]);
            }
            // Remove the processed element from mp1 (decrement count or erase)
            mp1.erase(arr2[i]);
        }

        // Step 3: Process remaining elements in mp1
        for (auto it : mp1) {
            // For each element in mp1, add it to 'remaining' as many times as it appears in arr1
            for (int j = 0; j < it.second; j++) {
                remaining.push_back(it.first);
            }
        }

        // Step 4: Sort the 'remaining' vector
        sort(remaining.begin(), remaining.end());

        // Step 5: Concatenate 'remaining' to the end of 'ans'
        ans.insert(ans.end(), remaining.begin(), remaining.end());

        return ans; // Return the sorted result
    }
};

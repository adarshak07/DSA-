 int count = 0;
    int n = nums.size();   //SLIDING WINDOW IS USED , SINCE SUBARAY . FEEL SLIDING WINDOW ME LEFT , RIGHT KE BICH MW SAARE ELEMENTS CONSIDER . 
    int product = 1;
    int left = 0; // Left pointer of the sliding window

    for (int right = 0; right < n; right++) {
        product *= nums[right]; // Expand the sliding window by multiplying the right element

        // Shrink the sliding window from the left until the product is less than K
        while (product >= k && left <= right) {
            product /= nums[left]; // Shrink the window by dividing the left element
            left++; // Move the left pointer to the right
        }

        // Calculate the number of subarrays ending at the current right pointer
        // with a product less than K, and add it to the count.
        count += (right - left + 1);   
    }

    return count;

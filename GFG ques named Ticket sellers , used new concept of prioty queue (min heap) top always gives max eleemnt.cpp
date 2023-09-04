class Solution{
public:
    int maxAmount(int N, int K, int A[])    //SO wheneverer want max alawsyy after each itration used pq.
    {
         int ans = 0, mod = 1e9+7;
        priority_queue <int> pq;

        // Step 1: Initialize the priority queue with the number of tickets from each seller.
        for (int i = 0; i < N; i++)
            pq.push(A[i]);

        // Step 2: Sell K tickets while updating the priority queue.
        while (K--) {
            // Get the seller with the maximum number of tickets.
            int num = pq.top();
            pq.pop();
            
            // Add the number of tickets sold to the total earnings.
            ans += num;
            
            // Decrement the number of tickets for the seller and push them back to the priority queue.
            pq.push(num - 1);
            
            // Ensure that ans stays within the modulo limit.
            ans %= mod;
        }

        // Step 3: Return the maximum earnings modulo 10^9 + 7.
        return ans;
    
    }
};

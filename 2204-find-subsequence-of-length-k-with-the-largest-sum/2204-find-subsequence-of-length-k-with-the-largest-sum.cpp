class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        if (nums.size() == k) return nums; // If k equals array size, return the array

        // Min-heap to store the top k largest elements with their indices
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i], i}); // Push element with index
            if (minHeap.size() > k) minHeap.pop(); // Keep only the largest k elements
        }

        vector<int> indices;
        // Extract indices from the heap
        while (!minHeap.empty()) {
            indices.push_back(minHeap.top().second);
            minHeap.pop();
        }

        sort(indices.begin(), indices.end()); // Sort indices to maintain relative order

        vector<int> ans;
        // Build the subsequence using sorted indices
        for (int idx : indices) {
            ans.push_back(nums[idx]);
        }

        return ans;
    }
};
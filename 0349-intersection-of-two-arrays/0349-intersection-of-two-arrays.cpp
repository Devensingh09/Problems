class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans(nums1.begin(), nums1.end());
        unordered_set<int> res;
        for (int x : nums2) {
            if (ans.find(x) != ans.end()) {
                res.insert(x);
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end(), greater<>());
        int i, cnt = 0;
        for(i = 1; i < nums.size(); i++) {
            if(cnt == 2)
                return nums[i-1];
            if(nums[i] != nums[i-1])
                cnt++;
        }
        if(cnt == 2)
            return nums[i-1];
        return nums[0];
    }
};
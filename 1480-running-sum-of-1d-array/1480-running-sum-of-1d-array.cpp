class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = nums.size();
        vector<int>ans(s);
        ans[0] = nums[0];
        for(int i=1; i<s; i++)
        {
            ans[i] = ans[i-1] + nums[i];
        }
        return ans;
    }
};
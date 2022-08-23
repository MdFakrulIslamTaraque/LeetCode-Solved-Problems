class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_max = nums[0], global_max = nums[0], s = nums.size();
        vector<int>maxV = nums;
        // for(int i=0; i<s; i++)
        // {
        //     cout<<maxV[i]<<" ";
        // }
        // cout<<"-----------\n";
        for(int i=1; i<s; i++)
        {
            maxV[i] = max(maxV[i], maxV[i-1]+nums[i]);
            global_max = max(global_max,maxV[i]);
        }
        // for(int i=0; i<s; i++)
        // {
        //     cout<<maxV[i]<<" ";
        // }
        // cout<<endl;
        return global_max;
    }
};
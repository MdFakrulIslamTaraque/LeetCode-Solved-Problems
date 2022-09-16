class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        int s = nums.size(), ans = nums[0];
        for(int i=0; i<s; i++)
            freq[nums[i]]++;
        for(auto i:freq)
        {
            if(i.second > s/2)
                ans = i.first;
        }
        return ans;
    }
};
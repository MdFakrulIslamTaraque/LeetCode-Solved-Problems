class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1, sum = 0, s = nums.size(), half, f = 0, lsum = 0, rsum = 0;
        for(int i=0; i<s; i++) sum += nums[i];
        half = sum/2;
        cout<<half<<endl;
        for(int i=1; i<s; i++)
        {
            nums[i] = nums[i-1] + nums[i];
        }
        int i;
        if(lsum == (nums[s-1] - nums[0])) return 0;
        for(i=1; i<s; i++)
        {
            lsum = nums[i-1];
            rsum = nums[s-1] - nums[i];
            if(lsum == rsum)
            {
                f = 1;
                break;
            }
        }
        if(f == 1) index = i;
        return index;
        
    }
};
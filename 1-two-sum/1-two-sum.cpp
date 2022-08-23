class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int vector_size = nums.size();
        for(int i=0; i<vector_size; i++)
        {
            m[nums[i]]=i;
        }
        //auto it = m.begin();
        //int i1,i2;
        for(int i=0; i<vector_size; i++)
        {
            //i1 = i;
            //it = m.find(target - nums[i]);
            if( m.find(target-nums[i]) != m.end() )
            {
                //i2 = (int)it->second;
                if(i != m[target-nums[i]])
                    return {i,m[target-nums[i]]};
            }
        }
        return {-1,-1};
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int num_size = nums.size();
        
            //--------way-1--------------
        // map<int,int>m1;
        // if(num_size > 1)
        // {
        //     m1[nums[0]] = 1;
        //     for(int i=1; i<num_size; i++)
        //     {
        //         auto it = m1.find(nums[i]);
        //         if(it != m1.end())
        //         {
        //             return true;
        //         }
        //         m1[nums[i]] = 1;
        //     }
        //     return false;
        // }
        // return false;
        
                //--------way-2--------------
        // if(num_size>1)
        // {
        //     sort(nums.begin(),nums.end());
        //     for(int i=1; i<num_size; i++)
        //     {
        //         if(nums[i] == nums[i-1])
        //             return true;
        //     }
        //     return false;
        // }
        // return false;
        
                //--------way-3(much faster and easier)--------------
        set<int> s(nums.begin(),nums.end());
        int set_size = s.size();
        if(num_size>set_size)
            return true;
        else
            return false;
        
    }
};
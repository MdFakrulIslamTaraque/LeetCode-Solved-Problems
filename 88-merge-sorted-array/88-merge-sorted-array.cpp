class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int>ms1;
        for(int i=0; i<m; i++)
        {
            ms1.insert(nums1[i]);
        }
        
        for(int i=0; i<n; i++)
        {
           ms1.insert(nums2[i]);
        }
        nums1.clear();
        for(auto i = ms1.begin(); i!=ms1.end(); i++)
        {
            nums1.push_back(*i);
        }
        
        
    }
};
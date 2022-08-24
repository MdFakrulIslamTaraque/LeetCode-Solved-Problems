class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multimap<int,int>m1,m2;
        int s1 = nums1.size(), s2 = nums2.size();
        if(s1<=s2)
        {
            for(int i=0; i<s1; i++)
                m1.insert({nums1[i],i});
            
            for(int i=0; i<s2; i++)
                m2.insert({nums2[i],i});
        
        }
        else
        {
            for(int i=0; i<s2; i++)
                m1.insert({nums2[i],i});
            
            for(int i=0; i<s1; i++)
                m2.insert({nums1[i], i});
        }
        
        //for(auto it = m1.cbegin(); it!= m1.cend(); ++it)
//         for(auto it:m1)
//             cout<<(it).first<<" ";
//         cout<<endl;
        
//         //for(auto it = m2.cbegin(); it!= m2.cend(); ++it)
//         for(auto it:m2)
//             cout<<(it).first<<" ";
//         cout<<endl;
        
        vector<int>ans;
        int now;
        for(auto it:m1)
        {
            now = it.first;
            auto add = m2.find(now);
            if(add != m2.end())
            {
                ans.push_back(now);
                m2.erase(add);
            }
        }
        
        return ans;
        
    }
};
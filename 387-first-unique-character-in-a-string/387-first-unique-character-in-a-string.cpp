class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        //unordered_map<int,char>index;
        int ls = s.size();
        for(int i=0; i<ls; i++)
        {
            freq[s[i]]++;
            //m[s[i]] = i;
        }
        for(int i=0; i<ls ;i++)
        {
            if(freq[s[i]] == 1)
            {
                return i;
                //in = m[c];
                //index[i] = c;
            }
        }
        //if(index.size() == 0)
        return -1;
        //return m[index[0]];
    }
};
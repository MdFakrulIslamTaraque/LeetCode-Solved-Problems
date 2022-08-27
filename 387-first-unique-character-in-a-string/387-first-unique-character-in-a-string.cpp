class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        int ls = s.size();
        for(int i=0; i<ls; i++)
            freq[s[i]]++;
        for(int i=0; i<ls ;i++)
            if(freq[s[i]] == 1)
                return i;
        return -1;
    }
};
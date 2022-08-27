class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>f1,f2;
        int ls = s.size(), lt = t.size();
        for(int i=0; i<ls; i++) f1[s[i]]++;
        for(int i=0; i<lt; i++) f2[t[i]]++;
        if(f1 == f2)
            return true;
        return false;
    }
};
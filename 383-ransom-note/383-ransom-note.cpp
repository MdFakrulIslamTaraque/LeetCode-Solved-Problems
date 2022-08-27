class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>fr,fm;
        int lr = ransomNote.size(), lm = magazine.size();
        for(int i=0; i<lr; i++) fr[ransomNote[i]]++;
        for(int i=0; i<lm; i++) fm[magazine[i]]++;
        char cr;
        
        //if not found in magazine
        for(auto i:fr)
        {
            cr = i.first;
            if(fm.find(cr) == fm.end())
                return false;
        }
        
        //checking frequency, if greater, false
        for(auto i:fr)
        {
            cr = i.first;
            if(fr[cr] > fm[cr])
                return false;
        }
        
        return true;
        
    }
};
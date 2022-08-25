class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> v;
        v.push_back(1);
        triangle.push_back(v);
        if(numRows == 1) return triangle;
        v.clear();
        v.push_back(1);        
        v.push_back(1);
        triangle.push_back(v);
        if(numRows == 2) return triangle;
        
        for(int i=2; i<numRows; i++)
        {
            v.clear();
            v.push_back(1);
            for(int j=1; j<i; j++)
                v.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            v.push_back(1);
            triangle.push_back(v);
        }
        
        return triangle;
        
    }
};
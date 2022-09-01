class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int s_r = mat.size(), s_c = mat[0].size();
        //cout<<s_r<<" "<<s_c<<endl;
        if(s_r*s_c != r*c)
            return mat;
        
        vector<int>temp;
        
        for(int i=0; i<s_r; i++)
        {
            for(int j=0; j<s_c; j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        int ansA[r][c], k = temp.size(), ik = 0;
        vector<vector<int>>ansV;
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                ansA[i][j] = temp[ik];
                ik++;
            }
        }
        vector<int>tv;
        for(int i=0; i<r; i++)
        {
            tv.clear();
            for(int j=0; j<c; j++)
            {
                tv.push_back(ansA[i][j]);
            }
            ansV.push_back(tv);
        }
        
        return ansV;
        
        // vector<vector<int>>ansV;
        // int ans[r][c];
        // int is,js,ia,ja;
        // for(ia=0,is=0; ia<r,is<s_r; ia++,is++)
        // {
        //     for(ja=0,js=0; ja<c,js<s_c; ja++,js++)
        //     {
        //         ans[ia][ja] = mat[is][js];
        //     }
        //     //ansV[ia].push_back(ans[ia]);
        // }
        // vector<int>v;
        // for(int i=0;i<r;i++)
        // {
        //     v.clear();
        //     for(int j=0; j<c; j++)
        //         v.push_back(ans[i][j]);
        //     ansV.push_back(v);
        // }
        // return ansV;
    }
};
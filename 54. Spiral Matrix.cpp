class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0)  return {};
        vector<int> ans;
        int m=matrix.size(), n=matrix[0].size(),r=0,c=0;
        while(r<m && c<n)
        {
            for(int i=c;i<n;i++) ans.push_back(matrix[r][i]);
            r++;
            for(int i=r;i<m;i++) ans.push_back(matrix[i][n-1]);
            n--;
            if(r<m)
            {
                for(int i=n-1;i>=c;i--) ans.push_back(matrix[m-1][i]);
                m--;
            }
            if(c<n)
            {
                for(int i=m-1;i>=r;i--) ans.push_back(matrix[i][c]);
                c++;
            }
        }
        matrix.clear();
        return ans;
        
    }
};

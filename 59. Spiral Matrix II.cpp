class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     if(n==0) return {};
        vector<vector<int>> ans(n, vector<int>(n,0));
        int r=0,c=0, m=n,l=1;
        while(r<m && c<n)
        {
            for(int i=c;i<n;i++) ans[r][i]=l++;
            r++;
            for(int i=r;i<m;i++) ans[i][n-1]=l++;
            n--;
            if(r<m)
            {
                for(int i=n-1;i>=c;i--) ans[m-1][i]=l++;
                m--;
                for(int i=m-1;i>=r;i--) ans[i][c]=l++;
                c++;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0) return 0;
        int space=0, count=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ' && space==0) continue;
            
            if(s[i]!=' ') count++, space=1;
            else break;
        }
        s.clear();
        return count;
    }
};

class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i =0; i<s.length();i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    ans.push_back(s[i]);
                }
                else if(s[i]=='#')
                {
                     if(ans.size()!=0)
                    ans+=ans;
                }
                else if(s[i]=='%')
                {
                     if(ans.size()!=0)
                     reverse(ans.begin(), ans.end());
                }
                else if(s[i]=='*')
                {
                     if(ans.size()!=0)
                     ans.pop_back();
                }
            }
        return ans ;
    }
};

class Solution {
public:
    int myAtoi(string s) {
        string str = "0";
        int n = s.size();
        int i = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i<n && (s[i] == '-' || s[i] == '+') ) {
            if (s[i] == '-') {
                sign = -1;
            } 
                i++;
        
        }
        while (i < s.size() && (s[i] <= '9' && s[i] >= '0')) {

            str.push_back(s[i]);
            i++;
        }
        long long ans;
        try {
        ans = stoll(str);
        }
        catch(const out_of_range& e)
        {
            if (sign == 1) {
                return INT_MAX;
            } 
            if(sign==-1) {
                return INT_MIN;
            }
        }
         if (ans > INT_MAX) {
                if (sign == 1) {
                    return INT_MAX;
                } else {
                    return INT_MIN;
                }
            }
        return sign * ans;
    }
};

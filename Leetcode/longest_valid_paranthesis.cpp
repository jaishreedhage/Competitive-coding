class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int>v;
        int c = 0, max = 0;
        v.push_back(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                v.push_back(i);
            else{
                v.pop_back();
                if(v.size()<=0)
                    v.push_back(i);
                else{
                    c = i - v[v.size()-1];
                    if(c>max)
                        max = c;
                }
            }
        }
        return max;
    }
};

//IMP STACK QSN

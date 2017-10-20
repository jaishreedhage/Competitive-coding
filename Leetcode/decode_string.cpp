class Solution {
public:
    string decodeString(string s) {
        if(s.length()<2)
            return s;
        stack<int>n;
        stack<char> st;
        string t ="";
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s[i]>=48 && s[i]<=57){
                int nb = 0;
                int j=i;
                while(s[j]>=48 && s[j]<=57){
                    nb = nb*10+(s[j]-'0');
                    j++;
                }
                i=j-1;
                n.push(nb);
            }
            else {
                if(s[i]=='['){
                    st.push(s[i]);
                }
                else if(s[i]==']'){
                    t = "";
                    while(st.size()>0 && st.top()!='['){
                        t = st.top() + t;
                        st.pop();
                    }
                    st.pop();
                    int val = n.top();
                    n.pop();
                    string p = t;
                    for(int j=1;j<val;j++)
                        t += p;
                    cout<<t<<endl;
                    for(int j=0;j<t.length();j++)
                        st.push(t[j]);
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        t = "";
        while(st.size()>0){
            t = st.top() + t;
            st.pop();
        }
        return t;
    }
};
//good qsn, just that i had used string stack, due to which case like 2[a4[bc]ef] wasnt working, the ef part was getting repeated instead of the whole

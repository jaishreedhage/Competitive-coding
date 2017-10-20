void gen(vector<string>&v,string s,int n,int l,int r,int i){
    if(i==2*n){
        v.push_back(s);
        return;
    }
    if(l<n){
        s[i]='(';
        gen(v,s,n,l+1,r,i+1);
    }
    if(l>r && r<n){
        s[i]=')';
        gen(v,s,n,l,r+1,i+1);
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s(2*n,' ');
        gen(v,s,n,0,0,0);
        return v;
    }
};

//i have solved this qsn many times now

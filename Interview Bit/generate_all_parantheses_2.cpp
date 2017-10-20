void func(int n,int A,vector<string> &v,int lp,int rp,string s){
    // cout<<s<<endl;
    if(n==2*A){
        v.push_back(s);
    }
    else{
        if(lp<A){
            s[n]='(';
            func(n+1,A,v,lp+1,rp,s);
        }
        if(lp>rp){
            s[n] = ')';
            func(n+1,A,v,lp,rp+1,s);
        }
    }
}
vector<string> Solution::generateParenthesis(int A) {

    int n = 0,lp=0,rp=0;
    string s(2*A,'.');
    vector<string>v;
    func(n,A,v,lp,rp,s);
    return v;
}

//the two conditions, lp<A and if lp>rp those 2 are very important.
//i solved it myself after thinking for long. I feel bad for not getting it instantly.

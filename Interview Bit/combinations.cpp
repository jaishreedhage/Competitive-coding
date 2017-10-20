void combinations(int n,int k,int l,int m,vector<vector<int> >&v,vector<int> &s){
    if(l==k){
        v.push_back(s);
    }
    else{
        for(int i=m;i<=n;i++){
            s[l] = i;
            combinations(n,k,l+1,i+1,v,s);
        }
    }
}

vector<vector<int> > Solution::combine(int n, int k) {

    vector<vector<int> >v;
    int m = 1;
    vector<int> s(k);
    combinations(n,k,0,m,v,s);
    return v;
}

//lame qsn but i spent so much time coz i had forgotten to put return statement :P

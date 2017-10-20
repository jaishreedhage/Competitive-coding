void genSubsets(vector<int> &A,int l,int m,set< vector<int> >&v,vector<int>&sub){
    if(m==A.size()){
        v.insert(sub);
        return;
    }
    else{
        sub.push_back(A[m]);
        genSubsets(A,l+1,m+1,v,sub);
        sub.erase(sub.begin()+l,sub.end());
        genSubsets(A,l,m+1,v,sub);
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    set< vector<int> >v;
    vector<int> sub;
    genSubsets(A,0,0,v,sub);
    vector<vector<int> > v1;
    set<vector<int> >::iterator it;
    for(it=v.begin();it!=v.end();it++)
        v1.push_back(*it);
    return v1;
}

//to prevent duplicate using "set" instead of searching in vector myself

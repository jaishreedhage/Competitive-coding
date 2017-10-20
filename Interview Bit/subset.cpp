void genSubsets(vector<int> &A,int l,int m,vector< vector<int> >&v,vector<int>&sub){
    if(m==A.size()){
        v.push_back(sub);
        return;
    }
    else{
        sub.push_back(A[m]);
        genSubsets(A,l+1,m+1,v,sub);
        sub.erase(sub.begin()+l,sub.end());
        genSubsets(A,l,m+1,v,sub);
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    vector< vector<int> >v;
    vector<int> sub;
    genSubsets(A,0,0,v,sub);
    sort(v.begin(),v.end());
    return v;
}

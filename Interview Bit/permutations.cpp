void genPermutations(vector<int> &A,vector<vector<int> >&v,int l,int r){
    if(l==r)
        v.push_back(A);
    else{
        for(int i=l;i<=r;i++){
            swap(A[i],A[l]);
            genPermutations(A,v,l+1,r);
            swap(A[i],A[l]);
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> >v;
    genPermutations(A,v,0,A.size()-1);
    return v;
}

//normal qsn.

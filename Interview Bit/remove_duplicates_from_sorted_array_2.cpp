int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0;i<A.size();i++){
        int val = A[i],limit = 1,pos=i,j;
        for(j=i+1;j<A.size();j++){
            if(A[j]==val && limit<2){
                limit++;
                if(limit==2)
                   pos = j;
            }
            if(A[j]!=val)
                break;
        }
        A.erase(A.begin()+pos+1,A.begin()+j);
    }
    return A.size();
}

//easy qsn.

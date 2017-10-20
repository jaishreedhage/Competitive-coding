int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0,k=0;
    int min_max=INT_MAX,val;
    while(i<A.size() && j<B.size() && k<C.size()){
        val = max(abs(A[i]-B[j]),max(abs(B[j]-C[k]),abs(A[i]-C[k])));
        if(val<min_max){
            min_max = val;
        }
        if(A[i]<=B[j] && A[i]<=C[k])
            i++;
        else if(B[j]<=A[i] && B[j]<=C[k])
            j++;
        else
            k++;
    }
    return min_max;
}

//normal 2 ptr qsn only 

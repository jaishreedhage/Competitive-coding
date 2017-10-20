int Solution::firstMissingPositive(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    for(int i=0;i<A.size();i++){
        if(A[i]>0 && A[i]<=A.size()){
            int pos = A[i]-1;
            if(A[pos]!=A[i]){
                swap(A[pos],A[i]);
                i--;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        if(A[i]!=i+1)
            return i+1;
    }
    return A.size()+1;
}

//VERY IMPORTANT QSN!!

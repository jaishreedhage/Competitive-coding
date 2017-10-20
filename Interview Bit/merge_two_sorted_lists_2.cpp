void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    A.resize(A.size()+B.size());
    int k=0;
    for(int i=A.size()-B.size();i<A.size();i++)
        A[i] = B[k++];
    sort(A.begin(),A.end());
}


//easy qsn

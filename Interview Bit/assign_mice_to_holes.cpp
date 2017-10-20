int Solution::mice(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int c = 0, max = 0;
    for(int i=0;i<A.size();i++){
        c = abs(A[i]-B[i]);
        if(max<c)
            max = c;
    }
    return max;
}

//greedy approach, but i just did it myself without thinking extraordinarily

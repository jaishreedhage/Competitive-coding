int Solution::maxp3(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    int p = A[A.size()-1] * A[A.size()-2] * A[A.size()-3];
    int p1;
    if(A[0] < 0 && A[1]<0)
        p1 = A[0]*A[1]*A[A.size()-1];
    if(p>p1)
        return p;
    else
        return p1;
}

//good qsn. Firstly i ignored the case of 2 -ve numbers and 1 +ve number. So apart from that its lame only 

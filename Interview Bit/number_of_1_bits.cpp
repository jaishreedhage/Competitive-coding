int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // int val = log(A)/log 2;
    int count=0;
    while(A>=1){
        if(A&1==1)
            count++;
        A=A>>1;
    }
    return count;
}

//lame qsn ok

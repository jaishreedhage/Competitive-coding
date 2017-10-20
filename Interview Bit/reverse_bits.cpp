unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int B = A;
    int i = 0;
    while(i<16){
        int j = 0, k = 0;
        int l,m;
        l = A&(1<<i);
        m = A&(1<<(31-i));
        if(l!=0)
            j = 1;
        if(m!=0)
            k = 1;
        // cout<<j<<" "<<k<<" "<<i<<" "<<l<<" "<<m<<endl;
        if(k!=j){
            A = A^(1<<i);
            A = A^(1<<(31-i));
        }
        i++;
    }
    return A;
}

//easy qsn, idk why i didnt do it first when i saw it itself

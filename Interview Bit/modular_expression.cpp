int Solution::Mod(int A, int B, int C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(B==0)
        return 1%C;
    long long ans = 1,base = A;
    while(B>0){
        if(B%2==0){
            base = (base*base) % C;
            B = B/2;
        }
        else{
            ans = (ans*base)%C;
            B--;
        }
    }
    if(ans<0)
        ans = (ans+C)%C;
    return ans;
}

//same as implement power function qsn

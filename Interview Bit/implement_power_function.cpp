int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(n==0)
        return 1%d;
    long long ans = 1,base=x;
    while(n>0){
        if(n%2==1){
            ans = (ans*base)%d;
            n--;
        }
        else{
            base = (base*base)%d;
            n = n/2;
        }
    }
    if(ans<0)
        ans = (ans+d)%d;
    return ans;
}

//very good qsn : firstly i learnt what mod of negative numbers is
// p = x % d  when x>0
// p = (x + d) % d  when x<0

//second of all, the mod with multiplication => no change in x^n % d or continuous mod on each multiplication
//third of all -> making ans as long and using "base"=A in long is very important step

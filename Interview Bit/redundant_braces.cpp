int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<char> st;
    for(int i=0;i<A.length();i++){
        int count=0;
        if(A[i]!=')')
            st.push(A[i]);
        else{
            if(st.top()=='(')
                return 1;
            else{
                while(st.top()!='('){
                    count++;
                    st.pop();
                }
                st.pop();
                if(count<2)
                    return 1;
            }
        }
    }
    return 0;
}

//easy qsn. I forgot the case where (a) is also considered to be redundant

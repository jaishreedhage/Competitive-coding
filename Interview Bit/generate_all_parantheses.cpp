int Solution::isValid(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<char> st;
    for(int i=0;i<A.length();i++){
        // cout<<A[i]<<" ";
        if(A[i]=='(' || A[i]=='{' || A[i]=='[')
            st.push(A[i]);
        else if(st.empty())
            return 0;
        else if((A[i]==')' && st.top()=='(') || (A[i]=='}' && st.top()=='{') || (A[i]==']' && st.top()=='['))
            st.pop();
        else
            return 0;
    }
    if(st.empty())
        return 1;
    return 0;
}


//easy qsn

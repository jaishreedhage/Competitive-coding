int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<string> st;
    for(int i=0;i<A.size();i++){
        if(A[i].compare("+")==0 || A[i].compare("-")==0 || A[i].compare("*")==0 || A[i].compare("/")==0 ){
            int a = stoi(st.top());
            st.pop();
            int b= stoi(st.top());
            st.pop();
            int c;
            if(A[i].compare("+")==0)
                c=a+b;
            else if(A[i].compare("-")==0)
                c=b-a;
            else if(A[i].compare("*")==0)
                c=a*b;
            else if(A[i].compare("/")==0)
                c=b/a;
            st.push(to_string(c));
        }
        else
            st.push(A[i]);
    }
    return stoi(st.top());
}

//easy qsn.

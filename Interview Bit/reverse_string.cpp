string Solution::reverseString(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<char> st;
    for(int i=0;i<A.length();i++){
        st.push(A[i]);
    }
    string rev_str;
    while(!st.empty()){
        // cout<<st.top()<<" ";
        rev_str.push_back(st.top());
        st.pop();
    }
    return rev_str;
}

//was easy..just remember that when you want to show all elements of stack and pop at the same time, dont use for loop with iterating i
//use isempty() function
